/*
 * Chapter 11 Exercise 9:
 * Rewrite the readLine function from chapter 10 so that it uses character
 * pointer rather than an array.
 */

#include <stdio.h>

void readLine (char *buffer)
{

	do
	{
		*(buffer++) = getchar();
	}while ( *(buffer - 1) != '\n' );
	
	*(--buffer) = '\0';
}

int main (void)
{
	char line[81];

	readLine(line);
	printf("%s\n\n", line);

	return 0;
}
