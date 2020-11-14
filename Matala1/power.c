#include <stdio.h>
#define E 2.71828


// This function takes an integer value and returns the exponent value -> (e^x) 
double Exponent(int x)
{
	double result = 1;
	// If x >= 0 go inside the for loop, regular case.
	if (x >= 0) 
	{	// For loop to calculate e^x
		for (int i = 0; i < x; i++)
		{
			result *= E;
		}
		return result;
	}
	else
	{
		// Absolue x.
		x *= -1;
		// For loop to calculate e^x
		for (int i = 0; i < x; i++)
		{
			result *= E;
		}
		// Return 1/(e^x) because x < 0 and (e^-x) == (1/e^x) 
		return (1 / result);
	}
}


// This function multiplies x, y times -> (x^y)  
double Power(double x, int y) 
{
	double result = 1;
	// If y >= 0 go inside the for loop, regular case.
	if (y >= 0)
	{
		// For loop to calculate x^y
		for (int i = 0; i < y; i++)
		{
			result *= x;
		}
		return result;
	}
	else
	{
		// Absolue y.
		y *= -1;
		// For loop to calculate x^y
		for (int i = 0; i < y; i++)
		{
			result *= x;
		}
		// Return 1/(x^y) because y < 0 and (x^-y) == (1/x^y) 
		return (1 / result);
	}
}