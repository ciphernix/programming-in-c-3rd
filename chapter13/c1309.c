/*
 * Chapter 13 Exercise 9:
 * Write a macro ABSOLUTE_VALUE that computes the absolute value of its arguement.
 */

#include <stdio.h>

#define ABSOLUTE_VALUE(x) ( ((x) >= 0 ) ? x : -(x) )

int main(void)
{
	int x;
	
	printf("Enter integer : ");
	scanf("%i", &x);
	printf("Abs : %i\n", ABSOLUTE_VALUE(x));

	return 0;
}
