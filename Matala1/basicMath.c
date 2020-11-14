#include <stdio.h>


// Adds x with y
float add(float x, float y) 
{
	return x + y;
}

// Subs y from x
float sub(float x, float y) 
{
	return  x - y;
}

// Multiplies x with y 
double mul(double x, int y) 
{
	return x * y;
}

// Divides x with y if and only if y != 0 (Cant divide by zero)
double div(double x, int y) 
{
	if (y != 0)
	{
		return x / y;
	}
	return -1;
}

