/*
 *Chapter 13 exercise 4:
 *Define a macro MAX3 that gives the maximum of three values.
 *Write a program to test the definition.
 */

#include <stdio.h>

#define MAX3(x,y,z) ( (x) > (y) ? ( (x) > (z) ? (x) : (z) ) : ( (y) > (z) ? (y) : (z) ) )

int main(void)
{
	int x,y,z;
	printf("x y z: ");
	scanf("%i %i %i", &x, &y, &z);
	printf("Max : %i\n", MAX3(x,y,z));
	
	return 0;
}
