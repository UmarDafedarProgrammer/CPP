#include <iostream>
#include "C:\Users\user\Source\Repos\ConsoleApplication1\SourceHeader.h"

using namespace std;


/*
Union:
	Just like in struct declaration, the default member access in a union is public.

*/

const double PI = 3.143;

union Circle
{
	Circle();
	~Circle();
	Circle(const Circle&);
	Circle& operator=(const Circle&);
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
	double area = PI * radius * radius;
	cout << area << endl;
	return area;
}

double Circle::AreaByDiameter()
{
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

Circle& Circle::operator=(const Circle& Other)
{
	cout << "Copy Assignment Operator is called" << endl;
	radius = Other.radius;
	diameter = Other.diameter;
	return *this;
}

Circle::Circle(const Circle& Other)
{
	cout << "Copy Constructor is called" << endl;
	radius = Other.radius;
	diameter = Other.diameter;
}

void Union()
{
	cout << "Union as a class \n";
	Circle cobj;
	cobj.SetRadius(445.90909067);
	cout << "Area of the Circle for given radius(" <<cobj.GetRadius()<<")"<< double(cobj.AreaByRadius()) << endl;
	cout << "Area of the Circle for given diameter( "<<cobj.GetDiameter()<<")" << double(cobj.AreaByDiameter()) << endl;

	//Lets work on the copy assignment operator
	Circle cobj2;
	cobj2 = cobj;
	cout << "Area of the Circle for given radius(" << cobj2.GetRadius() << ")" << double(cobj2.AreaByRadius()) << endl;
	cout << "Area of the Circle for given diameter( " << cobj2.GetDiameter() << ")" << double(cobj2.AreaByDiameter()) << endl;
	
	//Lets work on the Copy Constructor
	Circle cobj3 = cobj2;
	cout << "Area of the Circle for given radius(" << cobj3.GetRadius() << ")" << double(cobj3.AreaByRadius()) << endl;

	return;
}
