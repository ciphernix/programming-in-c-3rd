/* Program that converts integer to english numbers.
 * Example: 123
 * One two three
 */

#include <stdio.h>

int main(void)
{
	unsigned long number, current, temp;
	unsigned long multiplier = 1;
	unsigned long reverse = 0;
	int rev_digits, digits = 0;
	int temp_digits;

	printf("Will convert integer number to english words.\n");
	printf("Example: 123 will out put one two three.\n\n");
	printf(": ");

	scanf("%lu", &number);
	temp = number;

	//Get the number of digits
	do
	{
		temp = temp / 10;
		digits += 1;
	}while(temp > 0);

	temp_digits = digits;

	//Set the multiplier to be 1x10^digits
	for (; digits > 1; digits--)
	{
		multiplier = multiplier * 10;	
	}
	
	//Reverse the number
	for (; multiplier > 0; multiplier = multiplier / 10)
	{

		reverse = reverse + ( (number % 10) * multiplier );
		number = number / 10;
	}
	
	//Get the number of reverse digits
	for (int i = reverse; i > 0; i = i / 10)
	{
		rev_digits++;	
	}
	//Print out the digits in english
	do
	{
		current = reverse % 10;
		reverse = reverse / 10;
		switch (current)
		{
			case 1:
				printf("one ");
				break;

			case 2:
				printf("two ");
				break;

			case 3:
				printf("three ");
				break;

			case 4:
				printf("four ");
				break;

			case 5:
				printf("five ");
				break;

			case 6:
				printf("six ");
				break;

			case 7:
				printf("seven ");
				break;

			case 8:
				printf("eight ");
				break;

			case 9:
				printf("nine ");
				break;

			default:
				printf("zero ");
				break;
			}


	}while (reverse > 0);
	if (rev_digits < temp_digits)
	{
		for (int i = temp_digits - rev_digits; i > 0; i--)
		{
			printf("zero ");
		}
	}
	printf("\n");

	return 0;
}
