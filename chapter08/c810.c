/* Program to determine if a number is prime.
 */

#include <stdio.h>
#include <stdbool.h>
int main (void)
{
	bool isPrime (int n);
	int n;

	printf("Enter Number : ");
	scanf("%i", &n);

	if ( isPrime(n) )
		printf("%i is prime.\n", n);
	else
		printf("%i is not prime\n",n);

	return 0;
}

bool isPrime (int n)
{
	double squareRoot (double x, double epsilon);
	int limit;
	int divisor;
	
	if ( n == 3 || n == 2)
		return true;
	if ( n % 2 == 0)
		return false;
	
	limit = (int) squareRoot ( (double) n, 0.0001) + 1;

	for (divisor = 3; divisor <= limit; divisor += 2)
		if ( n % divisor == 0)
			return false;

	return true;
	
}

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

