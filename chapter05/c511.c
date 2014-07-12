/* Program to calculate the sum of the digits of an integer
 * For example 2155 is 2 + 1 + 5 + 5 = 13
 */

#include <stdio.h>

int main(void)
{
	unsigned long number;
	unsigned long input;
	unsigned long sum = 0;
	unsigned long digit;
	
	printf("Enter Integer: ");
	scanf("%lu", &input);
	number = input; //Store input to display leter

	do
	{
		digit = number % 10;
		sum += digit;
		number = number / 10;
	} while (number > 0);
	
	printf("The sum of the digits of %lu is %lu.\n",input,sum);

	return 0;
}
