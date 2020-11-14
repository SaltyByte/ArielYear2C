#include <stdio.h>
#include "myMath.h"

void calc(double x);


int main()
{
	double input;
	printf("Please insert a real number: ");
	scanf("%lf", &input); // Take input from user, assign in input.
	calc(input); // Perform calc function
	return 0;
}

void calc(double x)
{
	// Using functions in myMath.h to calculate the formula
	double exponent = Exponent(x);
	double power = Power(x, 3);
	float add1 = add(exponent, power);
	float result = sub(add1, 2);

	//e^x + x^3 - 2
	printf("\nThe value of f(x) = e^x + x^3 - 2 at the point: %.4f is: %.4f\n\n", x, result);

	// Using functions in myMath.h to calculate the formula
	power = Power(x, 2);
	double multi1 = mul(power, 2);
	double multi2 = mul(x, 3);
	result = add(multi1, multi2);

	//3x + 2x^2
	printf("\nThe value of f(x) = 3x + 2x^2 at the point: %.4f is: %.4f\n\n", x, result);

	// Using functions in myMath.h to calculate the formula
	power = Power(x, 3);
	multi1 = mul(power, 4);
	multi2 = mul(x, 2);
	double div1 = div(multi1, 5);
	result = sub(div1, multi2);

	//(4x^3)/5 - 2x
	printf("\nThe value of f(x) = (4x^3)/5 - 2x at the point: %.4f is: %.4f\n\n", x, result);
}

