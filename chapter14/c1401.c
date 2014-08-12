/*
 *Chapter 14 exercise 1:
 *Define a type FunctionPtr (using typedef) that represents a pointer 
 *to a function that returns an int and that takes no arguments. 
 */

#include <stdio.h>
//int (*fnPtr) (void);
 
typedef int (*FunctionPtr)(void);

int testFunction(void)
{
	return 1;
}

int main (void)
{
	int testFunction(void);
	FunctionPtr testFcPtr;
	
	testFcPtr = testFunction;
	
	printf("%i\n",testFcPtr());
	
	return 0;
} 