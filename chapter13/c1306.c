/*
 *Chapter 13 exercise 6:
 *Write a macro IS_UPPER_CASE that gives a nonzero value if a character 
 *is an uppercase letter.
 */

#include <stdio.h>

#define IS_UPPER_CASE(c) ( ((c) >= 'A' && (c) <= 'Z' ) ? 1 : 0 )

int main (void)
{
	char c;
	printf("Enter char c :");
	c = getchar();
	
	if (IS_UPPER_CASE(c))
		printf("%c is upper case\n", c);
	else 
		printf("%c is lower case\n", c);
	
	return 0;
}