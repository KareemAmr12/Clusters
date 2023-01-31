#ifndef point_h
#define point_h
#include <iostream>
using namespace std;


class point
{
public:
	point(); // Default Constructor, sets X = Y = 0
	point(float, float); // Constructor. Initializes both X and Y.
	~point();  //deconsturcor
	void setx(float); // Set X value
	void sety(float); // Set Y value
	float getx() const;  // Get X value
	float gety() const; // Get Y value
	void display() const; // Display point as (X , Y)
	float distance(const point& p); // distance between current point and another point p
	
	

private:
	// Data members
	float x;
	float y;

	
};

#endif
