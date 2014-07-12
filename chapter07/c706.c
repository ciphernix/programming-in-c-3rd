/* Fibonacci Numbers without an array 
 */

#include <stdio.h>

int main(void)
{
	int fib1 = 0;
	int fib2 = 1;
	int fib;
	int i;
	
	//print the first two fib numbers	
	printf("%i %i ",fib1,fib2);

	for ( i = 2; i < 15; i++ )
	{
		fib = fib1 + fib2;
		printf("%i ",fib);
		fib1 = fib2;
		fib2 = fib;
	}

	printf("\n");

	return 0;
}
