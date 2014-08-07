/*
 *Chapter 13 exercise 7:
 *Write a macro IS_ALPHABETIC that gives a nonzero value if a character is 
 *an alphabetic character. Have the macro use the IS_LOWER_CASE macro defined
 *in the chapter text and the IS_UPPER_CASE macro defined in exercise 6.
 */

#include <stdio.h>

#define IS_UPPER_CASE(c) ( ((c) >= 'A' && (c) <= 'Z' ) ? 1 : 0 )
#define IS_LOWER_CASE(c) ( ((c) >= 'a' && (c) <= 'z' ) ? 1 : 0 )
#define IS_ALPHABETIC(c) ( (IS_UPPER_CASE((c)) || IS_LOWER_CASE((c)) ? 1 : 0)

int main (void)
{
	char c;
	printf("Enter char c :");
	c = getchar();
	
	if (IS_ALPHABETIC(c))
		printf("%c is an alphabetic character\n", c);
	else 
		printf("%c is not an alphabetic character\n",c);
	
	return 0;
}