/*
 * Exercise 15 and 16.
 * Program to convert a positive inter to another base.
 */

#include <stdio.h>
#include <stdbool.h>

int 		convertedNumber[64];
long int	numberToConvert;
int		base;
int		digit;

void getNumberAndBase (void)
{	
	bool validBase;
	printf ("Number to be converted? " );
	scanf ("%li", &numberToConvert);
	if (numberToConvert == 0)
		return;

	do {
		printf ("Base? ");
		scanf ("%i", &base);
		if ( base < 2 || base > 16 )
		{
			printf ("Base base - must be between 2 and 16\n");
			validBase = false;
		}else
			validBase = true;
	}while (validBase == false);
}

void convertNumber (void)
{
	do {
		convertedNumber[digit] = numberToConvert % base;
		digit++;
		numberToConvert /= base;
	}while ( numberToConvert != 0);
}

void displayConvertedNumber (void)
{
	const char baseDigits[16] =
	{ '0', '1', '2', '3', '4', '5', '6', '7','8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	int nextDigit;

	printf ("Converted number = ");

	for(digit--; digit >=0; digit--)
	{
		nextDigit = convertedNumber[digit];
		printf ("%c", baseDigits[nextDigit]);
	}

	printf ("\n");
}

int main (void)
{
	void getNumberAndBase (void), convertNumber (void),
	     displayConvertedNumber (void);

	printf ("\nProgram to convert a number from base 10 to any base between 2 and 16 - inclusive.\n");
	printf ("To quit enter 0 as a number to be converted\n\n");	
	while (true )
	{	
		digit = 0;
		getNumberAndBase();
		if (numberToConvert == 0)
			break;
	
		convertNumber ();
		displayConvertedNumber ();
	}

	return 0;
}

