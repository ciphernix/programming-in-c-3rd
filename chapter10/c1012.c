/*
 * Chapter 10 Exercise 12.
 * Program to convert a string to a float.
 * Will reuse strToInt function from previous exercise
 */

#include <stdio.h>
#include <stdbool.h>

float strToFloat (const char string[] )
{
	bool stillCounting = true, isNegative = false, startDecimal = false;
	float intRes = 0, floatRes = 0, result;
	int i = 0, n = 1;

	i = 0;
	if ( string[i] == '-' )
	{
		isNegative = true;
		i++;
	}
	
	while(stillCounting)
	{
		if (string[i] >= '0' && string[i] <= '9' && startDecimal == false)
		{
			intRes = intRes * 10 + (string [i] - '0');
			i++;
		}
		else if (string[i] >= '0' && string[i] <= '9' && startDecimal == true)
		{
			n *= 10;
			floatRes = floatRes * 10 + (string [i] - '0');
			i++;
		}
		else if (string[i] == '.' )
		{
			startDecimal = true;
			i++;
		}
		else 
			stillCounting = false;
	}	

	floatRes = floatRes / (float) n;
	result = intRes + floatRes;

	if (isNegative)
		result = -result;

	return result;
}

int main (void)
{
	float strToFloat (const char string[] );
	char string[64];
	
	printf("Enter string : ");
	gets(string);
	
	printf("%g\n",strToFloat(string) );

	return 0;
}
