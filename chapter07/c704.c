/* Program that calculates the average of an array with 10 floats
 */

#include <stdio.h>

int main(void)
{
	float values[10], input, average;
	float total = 0;
	int i;

	for ( i = 1; i <= 10; i++)
	{
		printf("Enter value number %i: ", i);
		scanf("%f",&input);
		values[i-1] = input;
	}

	for ( i = 0; i < 10; i++ )
	{
		total += values[i];
	}

	average = total / 10.0;
	printf("The average is %g\n", average);

	return 0;
}

