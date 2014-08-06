/*
 *Chapter 13 exercise 3:
 *Define a macro MIN that gives the minimum of two values.
 *Then write a program to test the macro definition.
 *
 */

#include <stdio.h>

#define MIN(x,y) ( (x) < (y) ? (x) : (y) )

int main(void)
{
	int x,y;
	printf("Enter x y :");
	scanf("%i %i", &x, &y);
	printf("Min is %i \n", MIN(x,y));
	
	return 0;
}
