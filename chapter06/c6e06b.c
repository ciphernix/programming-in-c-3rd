/* Program that converts integer to english numbers.
 * Example: 123
 * One two three
 * Modified to use functions and arrays
 */

#include <stdio.h>
int count_digits(unsigned long x)
{
        //Get the number of digits
	
	int digits = 0;

        do
        {
                x = x / 10;
                digits += 1;
        }while(x > 0);

        return digits;
}


int main(void)
{
	//Function def
	void print_number(int n);
	void digits_to_array(unsigned long n, int digits, int n_array[]);
	int count_digits(unsigned long x);

	unsigned long number;
	int digits, i;

	printf("Will convert integer number to english words.\n");
	printf("Example: 123 will out put one two three.\n\n");
	printf(": ");

	scanf("%lu", &number);
	
	digits = count_digits(number);

	//Declara varibable arrray
	int n_array[digits];
	
	//Call digits_to_array to store each digit in n_array	
	digits_to_array(number, digits, n_array);

	for(i = 0; i < digits; i++)
	{
		print_number(n_array[i]);
	}
	printf("\n");

	return 0;
}

void digits_to_array(unsigned long n, int digits, int n_array[])
{
	digits--; //decrement digit by one since array index starts at 0
	do
	{
		n_array[digits] = n % 10;
		n = n / 10;
		digits--;
	}while(n > 0);
}

void print_number(int n)
{
	//Print out the digits in english
	switch (n)
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

	return;
}
