/* Program to calculate the Square Root of a Number
 */

#include <stdio.h>

double absoluteValue (double x)
{
	if ( x < 0 )
	{
		x = -x;
	}
	return x;
}

//Function to compute the square of a number

double squareRoot (double x, double epsilon)
{
	double guess = 1.0;

	while ( absoluteValue ((guess * guess) / x - 1) >= epsilon)
	{
		printf("Guess is %g\n", guess);
		guess = ( x / guess + guess ) / 2.0;
	}

	return guess;
}

int main (void)
{
	double epsilon, x;

	printf("Whose number do you want to find the sqrt of : ");
	scanf("%lf", &x);
	printf("Epsilon ? ");
	scanf("%lf", &epsilon);

	printf("The sqrt of %g is %g : \n\n", x, squareRoot (x, epsilon));

	return 0;
}

