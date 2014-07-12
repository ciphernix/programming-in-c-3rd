/* Generate the first 10 factorials
 *
 */

#include <stdio.h>

int main(void)
{	
	int factorial;
	printf("Number\tFactorial\n\n");

	for (int n=10; n > 1; n--)
	{
		factorial = 1;
		for (int i=n; i > 1; i--)
			factorial = i * factorial;
		printf("%i\t%i\n",n,factorial);
	}
	
	printf("Now the reverse \n");
	printf("Number\tFactorial\n-------\t-------\n");
	for (int n = 1; n <= 10; n++)
	{
		factorial = 1;
		int i = 1;
		do
		{
			factorial = factorial * i;
			i++;
		} while (i < n);
		printf("%i\t%i\n",n,factorial);
	}
	return 0;
}
