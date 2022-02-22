#include <iostream>
#include "Vec3.h"
#include "Vec4.h"
#include "Plane.h"

using namespace std;

int main()
{
	Vec3 RStart1(1, 0, 1);
	Vec3 RDirection(3, 2, 1);
	Vec3 v3();
	
	Plane plane(2, 1, 0, -4);

	Ray RayTest(RStart1, RDirection);
	

	Vec3 v4 = plane.intersectionPoint(RayTest);
	cout << "Value of interection = " << "(" << v4.x << "," << v4.y << "," << v4.z  << ")" << endl;

	printf("\nAlan Jimenez - Math 2 -  Assignment 2/Plane fixed - n01487231");

	return 0;
}