#include<iostream>

using namespace std;

class Point 
{
	public:
		int x,y;
		
		int& xPoint();
		int& yPoint();	
		void Display();
};

int& Point::xPoint()
{
	return x;
}

int& Point::yPoint()
{
	return y;
}

void Point::Display()
{
	cout<<"x :"<<x<<", y :"<<y<<endl;
}

int main()
{
	Point PointObject;
	PointObject.x=10;
	PointObject.y=20;
	PointObject.Display();
	
	PointObject.xPoint() = 45; // Used as lvalue
	PointObject.yPoint() = 35; // Used as rvalue
	
	PointObject.Display();
	
	// Use as r-value
	cout<<"x :"<<PointObject.xPoint()<<", y :"<<PointObject.yPoint()<<endl;
	return 0;
}
