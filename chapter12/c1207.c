/*
 *Chapter 12 exercise 7:
 *Write a function called bitpat_get to extract a specified set of bits. 
 *Have it take three arguments: the first an unsigned int, the second an
 *integer starting bit number, and the third a bit count. Using the 
 *convention that bit numbering starts at 0 with the leftmost bit, extract 
 *the specified number of bits from the first argument and return the result.
 *So the call
 *	bitpat_get (x, 0, 3)
 *extracts the three leftmost bits from x. 
 *The call 
 *	bitpat_get (x, 3, 5)
 *extracts five bits starting with the fourth bit in from the left.
 */

#include <stdio.h>

 //Function to calculate the size of an int
int int_size(void)
{
	unsigned int n = ~0;
	int counter = 0;
	
	while ( n > 0 )
	{
 		n = n >> 1;
 		counter++;
	}
	return counter;
}

//function to calculate the min number of bits needed to represent a value
int numberOfBits(unsigned int x)
{
	int sizeOfInt = int_size();
	int counter = 0;
	unsigned int temp = 1 << (sizeOfInt - 1);
	while ( (temp | x) != x)
	{
		temp = temp >> 1;
		counter++;
	}
	
	return sizeOfInt - counter;
}

/*
 *extracts n bits from source starting at start.
 * 1. get the number of bits from source (nSourceBits)
 * 2. set unsigned int temp to ~1
 * 3. rightshift temp by (intSize - nSourceBits) + start
 * 4. temp & source
 * 5. rightshift temp by (nTempBits - n)
 * 6. return temp
 */
int bitpat_get(unsigned int source, int start, int n)
{
	int res, nSourceBits;
	
	return res;
}
