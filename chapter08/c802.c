/*Program to calcualte nth triangular number
 */

#include <stdio.h>

int calculateTriangularNumber (int n)
{
	int i, triangularNumber =0;

	for ( i = 1; i <= n; i++)
	{
		triangularNumber += i;
	}

	return triangularNumber;
}

int main (void)
{
	int n, number, triangularNumber, counter;

	printf("How many triangular numbers do you want ? ");
	scanf("%i", &n);

	for ( counter = 1; counter <= n; counter++)
	{
		printf("What triangular number do you want ? ");
		scanf("%i", &number);

		triangularNumber = calculateTriangularNumber(number);
		printf ("Triangular number %i is %i\n\n",number, triangularNumber);
	}

	return 0;
}
