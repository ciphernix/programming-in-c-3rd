/*
 * Chapter 10 Exercise 14.
 * Program to convert interget value into a char string
 */

#include <stdio.h>
#include <stdbool.h>

void intToStr(char string[], int number )
{
	char temp[64];
	int i = 0, j, n ;
	bool isNegative;
	
	if ( number < 0 )
	{
		isNegative = true;
		number = -number;
	}
	else
		isNegative = false;

	do
	{
		n = number % 10;
		number = number / 10;
		temp[i] = n + 48;
		i++;
	} while (number > 0);

	if ( isNegative )
	{
		temp[i] = '-';
		i++;
	}

	for (i -= 1,j = 0; i >= 0; i--,j++ )
		string[j] = temp[i];

	string[j] = '\0';
}

int main (void)
{	
	void intToStr(char string[], int number );
	int number;
	char string[64];

	printf("Enter number : ");
	scanf("%i",&number);

	intToStr(string, number);
	
	printf("%s\n",string);

	return 0;
}

