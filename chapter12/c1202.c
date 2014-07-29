/*
 *Chapter 12 Exercise
 *Write a function to determine if the machine performs a logical
 *or arithmetic right shift.
 *"If the sign bit is 0 (meaning the value is positive), 0s are shifted 
 *inregardless of which machine you are running. However, if the sign bit is 
 *1, on some machines 1s are shifted in, and on others 0s are shifted in.This 
 *former type of operation is known as an arithmetic right shift, whereas the 
 *latter is known as a logical right shift."
 */
 
#include <stdio.h>
#include <stdbool.h>

//function will right shift a negative, if the number is still negative,
//an arithmetic shift operarion is performed.

bool isLogicalShift(void)
{
	int n = -0777;
	
	n = n >> 1;
	if (n > 0 ) //arithmetic right shift
		return false;
	else 
		return true;
}

int main(void)
{
	if (isLogicalShift())
		printf("Computer uses logical right shift\n");
	else 
		printf("Computer uses arithmetic shift\n");
	
	return 0;
}
