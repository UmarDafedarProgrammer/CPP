#include <iostream>
#include "C:\Users\user\Source\Repos\ConsoleApplication1\SourceHeader.h"

using namespace std;


/*
Union:
	Just like in struct declaration, the default member access in a union is public.
  Data members functions can have private,protected and public access levels
  Constructors and Destructors,
*/

const double PI = 3.143;

union Circle
{
	Circle();
	~Circle();
	double AreaByRadius();
	double AreaByDiameter();
	void SetRadius(double);
	void SetDiameter(double);
	double GetRadius();
	double GetDiameter();
protected:
	double radius;
private:
	double diameter;
	
};

Circle::Circle()
{
	cout << "Default Constructor is called" << endl;
	radius = 10.00;
	diameter = 13.23;
}

Circle::~Circle()
{
	cout << "Destructor is called" << endl;
	radius = 0.0;
	diameter = 0.0;
}

double Circle::AreaByRadius()
{
	cout << "Area of the circle for the given radius - " << radius << endl;
	double area = PI * radius * radius;
	cout << area << endl;
	return area;
}

double Circle::AreaByDiameter()
{
	cout << "Area of the circle for the given Diameter - " << diameter << endl;
	double area = 0.25*PI * diameter * diameter;
	return area;
}

void Circle::SetRadius(double dr)
{
	cout << "Set the radius " << dr << endl;
	radius = dr;
	return;
}

void Circle::SetDiameter(double dr)
{
	cout << "Set the diameter " << dr << endl;
	diameter = dr;
	return;
}

double Circle::GetDiameter()
{
	return diameter;
}

double Circle::GetRadius()
{
	return radius;
}

void Union()
{
	cout << "Union as a class \n";
	Circle cobj;
	cobj.SetRadius(445.90909067);
	cout << "Area of the Circle for given radius(" <<cobj.GetRadius()<<")"<< double(cobj.AreaByRadius()) << endl;
	cout << "Area of the Circle for given diameter( "<<cobj.GetDiameter()<<")" << double(cobj.AreaByDiameter()) << endl;
	return;
}
