/* Program that returns the sum of an integer array
 */

#include <stdio.h>

int arraySum(int n, int array[] )
{
	int counter;
	int total = 0;

	for ( counter = 0; counter < n; counter++ )
	{
		total += array[counter];
	}

	return total;
}

int main (void)
{
	int arraySum(int n, int array[n]);
	int n, counter;

	printf("How many numbers are you going to enter? : ");
	scanf("%i", &n);

	int array[n];

	for (counter = 0; counter < n; counter++ )
	{
		printf("Enter digit number %i : ", counter + 1);
		scanf("%i", &array[counter]);
	}
	
	printf("The sum is %i\n", arraySum(n, array) );

	return 0;
}
