#include "point.h"
#include <time.h>
using namespace std;


point center(point c[], int size)  //here we calculate the center of each cluster
{
	int sumx = 0;
	int sumy = 0;
	for (int i = 0; i < size; i++)  //here we calculate the sum of the xs and ys to calculate the average later
	{
		sumx = sumx + c[i].getx();
		sumy = sumy + c[i].gety();
	}
	point center;
	center.setx(sumx / size);   //here we set the center x and y
	center.sety(sumy / size);
	
	return center;
}

void determine(point A[], point B[], int size, point p[], int n)  //here decide to which cluster the point is closer to
{
	point center1 = center(A, size);
	point center2 = center(B, size);
	float d1;
	float d2;
	for (int i = 0; i < n; i++)  // here we check the distance between the point and the center of each cluster and check which distance is shorter
	{
		cout << "Point #" << i + 1;
		p[i].display();
		d1 = p[i].distance(center1);
		d2 = p[i].distance(center2);
		if (d1 < d2)
		{
			cout << " and it belongs to cluster A" << endl;
		}

		if (d2 < d1)
		{
			cout << " and it belongs to cluster B" << endl;
		}
		cout << endl;
	}

}


float main()
{
	const int size = 100;  // the size of array A and B
	const int points = 20;  // the size of points to be decided to which cluster it belongs
	
	srand((unsigned)time(NULL)); 
	point A[size];
	for (int i = 0; i < size; i++)  // here we randomize the numbers of A points
	{
		A[i].setx(rand() % (90 - 70 + 1) + 70);
		A[i].sety(rand() % (90 - 70 + 1) + 70);
		
	}
	point B[size];
	for (int i = 0; i < size; i++) // here we randomize the numbers of B points
	{
		B[i].setx(rand() % (40 - 20 + 1) + 20);
		B[i].sety(rand() % (40 - 20 + 1) + 20);
	}
	point p[points];
	for (int i = 0; i < points; i++)  // here we randomize the numbers of the points to be determined 
	{
		p[i].setx(rand() % (100 - 5 + 1) + 5);
		p[i].sety(rand() % (100 - 5 + 1) + 5);
	}
	
	

	
	determine(A, B, size, p, points);  // here we calculate everything and display the outputs 


	system("pause");
	return 0;
}