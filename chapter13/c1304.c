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
	
	