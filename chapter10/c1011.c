/*
 * Chapter 10 Exercise 11.
 * Convert a string to an integer, include minus sign.
 */

#include <stdio.h>
#include <stdbool.h>

int strToInt (const char string[] )
{
	bool isNegative = false;
	int i, intValue, result = 0;

	i = 0;
	if ( string[i] == '-' )
	{
		isNegative = true;
		i++;
	}

	while(string[i] >= '0' && string[i] <= '9')
	{
		intValue = string [i] - '0';
		result = result * 10 + intValue;
		i++;
	}

	if (isNegative)
		result = -result;

	return result;
}

int main (void)
{
	int strToInt (const char string[]);
	char string[64];
	
	printf("Enter string : ");
	gets(string);
	
	printf("%i\n",strToInt(string) );

	return 0;
}
