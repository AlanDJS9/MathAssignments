#include "Vector.h"
#include "Plane.h"
#include "Sphere.h"
#include "Collider.h"
#include "Quaternion.h"
#include "AAB.h"

#include <iostream>

using namespace std;

int main()
{
	
	/*Vec3 RStart1(2.0f, -1.0f, -1.0f);
	Vec3 RDirection(0.0f, 2.0f, 3.0f);
	Sphere sphere(Vec3(0.0f, 0.0f, 0.0f), 5.0f);
	AAB cube(20.0f, 10.0f, 10.0f);
	Ray RayTest(RStart1, RDirection);

	if (Collider::RaySphereCollisionDetected(RayTest, sphere) == true)
	{
		  Vec3 result = (Collider::RaySphereCollisionPoint(RayTest, sphere));
		  cout << "Value of interection = " << "(" << result.x << "," << result.y << "," << result.z << ")" << endl;
	}

	printf("\n/ RAY /  BOX / Collision   - n01487231");

	Vec3 intersection = Collider::RayAABCollisionPoint(RayTest, cube);
	cout << "Value of interection = " << "(" << intersection.x << "," << intersection.y << "," << intersection.z << ")" << endl;*/
	
	Quaternion quat1(1.0f,2.0f,2.0f,3.0f);
	Quaternion quat2(2.0f,1.0f,2.0f,5.0f);

	cout << "Q1 = " << "(" << quat1.v.x << "," << quat1.v.y << "," << quat1.v.z << "," << quat1.d << ")" << endl;
	cout << "Q2 = " << "(" << quat2.v.x << "," << quat2.v.y << "," << quat2.v.z << "," << quat2.d << ")" << endl;

	Quaternion result = quat1*quat2;
	cout << "Value of multiplication = " << "(" << result.q.x << "," << result.q.y << "," << result.q.z << "," << result.q.w << ")" << endl;
	
	Quaternion resultAdd = quat1 + quat2;
	cout << "Value of addition = " << "(" << resultAdd.q.x << "," << resultAdd.q.y << "," << resultAdd.q.z << "," << resultAdd.q.w << ")" << endl;

	Quaternion resultSub = quat1 - quat2;
	cout << "Value of substraction = " << "(" << resultSub.q.x << "," << resultSub.q.y << "," << resultSub.q.z << "," << resultSub.q.w << ")" << endl;

	cout << "Value of conjugate = " << "(" << quat1.Conjugate().v.x << "," << quat1.Conjugate().v.y << "," << quat1.Conjugate().v.z << "," << quat1.Conjugate().d << ")" << endl;

	cout << "Value of magnitude = " << quat1.Mag() << endl;
	
	cout << "Value of inverse = " << "(" << quat1.Inverse().v.x << "," << quat1.Inverse().v.y << "," << quat1.Inverse().v.z << "," << quat1.Inverse().d << ")" << endl;

	cout << "Value of Q1 normalized = " << "(" << quat1.Normalize().v.x << "," << quat1.Normalize().v.y << "," << quat1.Normalize().v.z << "," << quat1.Normalize().d << ")" << endl;

	Quaternion quat3(1.0f, 1.0f, 1.0f, 0.0f);
	float angle = 90.0f;
	Vec3  v(1, 0, 0);
	Vec3 rotation = quat3.Rotate(v, angle);
	cout << "Value of rotation = " << "(" << rotation.x << "," << rotation.y << "," << rotation.z << "," << rotation.z << ")" << endl;

	printf("\nAlan Jimenez - Math 2 - Quaternion MATHS  - n01487231");

	return 0;
}