/* Program to solve the quadratic equation.
 * Root  x1 = (-b + ( sqrt(b*b - (4*a*c)) ) ) / 2 * a
 * Roots x2 = (-b - ( sqrt(b*b - (4*a*c)) ) ) / 2 * a
 * Where b*b - (4*a*ca) > 0
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
		guess = ( x / guess + guess ) / 2.0;
	}

	return guess;
}

void quadratic(int a, int b, int c)
{
	double disc,x1, x2;
	double epsilon = 0.0001;

	disc = b * b - (4 * a * c);

	if (disc < 0 )
	{
		printf("Roots are imaginary\n");
		return ;
	}

	x1 = (-b +  squareRoot(disc, epsilon) ) / ( 2 * a );
	x2 = (-b -  squareRoot(disc, epsilon) ) / ( 2 * a );

	printf("Roots are %g , %g\n\n", x1, x2);
	
	return;
}

int main (void)
{
	int a,b,c;
	printf("Enter a b c : ");
	scanf("%i %i %i", &a, &b, &c);

	quadratic(a, b, c);

	return 0;
}
