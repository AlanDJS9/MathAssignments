#include "Mat3.h"

/* Matrix Constructor
	Set matrix entries to the identity matrix */
Mat3::Mat3()
{
	for (int i = 0; i < 9; i += 4)
	{
		if (i % 4 == 0)
		{
			m[i] = 1;
		}
		else {
			m[i] = 0;
		}
	}
}

/* SetIdentity Member Function
	Set matrix entries to the identity matrix */
void Mat3::SetIdentity()
{
	for (int i = 0; i < 9; i += 4)
	{
		if (i % 4 == 0)
		{
			m[i] = 1;
		}
	}
}

/* RotateZ Member Function
	Set matrix entries to the rotation matrix */
void Mat3::RotateZ(float angle)
{
	m[0] = cos(angle);
	m[1] = -sin(angle);
	m[2] = 0;
	m[3] = sin(angle);
	m[4] = cos(angle);
	m[5] = 0;
	m[6] = 0;
	m[7] = 0;
	m[8] = 1;


}

/* Scale Member Function
	Set matrix entries to the scale matrix */
void Mat3::Scale(float x, float y, float z)
{
	for (int i = 0; i < 9; i++)
	{
		if (i == 0) {
			m[i] = x;
		}
		else if (i == 4) {
			m[i] = y;
		}
		else if (i == 8) {
			m[i] = z;
		}
		else {
			m[i] = 0;
		}
	}
}

/* Transpose Member Function
	Set matrix entries to the transpose matrix */
void Mat3::Transpose()
{
	//Size of array
	int n = sqrt(9);
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			swap(m[n * i + j], m[n * j + i]);
		}
	}


}