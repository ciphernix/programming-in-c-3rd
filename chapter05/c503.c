/* Triangular Number Formula 
 * triNumber = n ( n + 1 ) / 2
 */

#include <stdio.h>

int main(void)
{
	int n, triNumber ;
	int limit = 50;

	printf("Number\tTriangular Number\n");
	printf("------\t-------\n\n");

	for (n = 5; n < limit + 1; n = n + 5)
	{
		triNumber = (n * ( n + 1)) /2;
		printf("%i\t%i\n", n, triNumber);
	}
	return 0;

}
