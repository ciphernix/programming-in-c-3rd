/*Program that takes two integers from the user and determines if the first 
 * is divisibl by the second
 */

#include <stdio.h>

int main(void)
{
	int val1, val2;

	printf("Enter two integer values one after the other seperated by space\n");
	printf("Example: 5 10\n: ");
	scanf("%i %i", &val1, &val2);

	if (val1 % val2 == 0)
	{
		printf("%i is evenly divisible by %i\n", val1, val2);
	}else
	{
		printf("%i is NOT evenly divisible by %i\n", val1, val2);
	}

	return 0;
}
