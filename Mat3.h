#ifndef MAT3_H
#define MAT3_H

#include <iostream>
#include <math.h>

using namespace std;

class Mat3
{
public:
	//Very fancy, much fast 
	Mat3();

	void SetIdentity();

	void RotateZ(float angle);

	void Scale(float x, float y, float z);

	void Transpose();

	float m[9];
};

#endif
