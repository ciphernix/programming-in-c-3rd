/* Function to raise integer x to the nth power.
 * n must be a positive integer
 */

#include <stdio.h>

long long unsigned int x_to_the_n (long long unsigned int x, int n)
{
	if ( n == 1)
	{
		return x;
	}

	if ( n == 0 )
	{
		return 1;
	}

	if ( n < 0 )
	{	
		printf("n must be a positive int\n");
		return -1;
	}


	return x * x_to_the_n (x, n-1);
}

int main(void)
{
	long long unsigned int x;
	int n;

	printf("Enter number x : ");
	scanf("%llu", &x);
	printf("Enter positive power n : ");
	scanf("%i", &n);

	printf("%llu to the %i power is %llu\n\n",x, n, x_to_the_n(x, n));

	return 0;
}
	
