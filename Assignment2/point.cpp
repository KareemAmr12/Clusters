#include "point.h"

point::point()
{
	x = 0;
	y = 0;
}

point::point(float a, float b)  //here we initalize the x and y
{
	x = a;
	y = b;
}

point::~point()
{

}

void point::setx(float a)  // here we set the value of x
{
	x = a;
}

void point::sety(float b)  // here we set the value of y
{
	y = b;
}

float point::getx() const  //here we return the value of x
{
	return x;
}

float point::gety() const   //here we return the value of x
{
	return y;
}

void point::display() const   //here we display the required point
{
	cout << " is: " << "(" << x << " , " << y << ")" ;
}

float point::distance(const point& p) //here we calculate the distance between 2 points
{
	
	float d = sqrt(pow((x - p.x), 2) + pow((y - p.y), 2));
	
	return d;
}



