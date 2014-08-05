/*
 * Chapter 12 exercise 8:
 * Write a function called bitpat_set to set a specifid set of bits to a particular value.
 * The function should take four arguements:
 * a pointer to an unsigned int in which the specified bits are to bet set; another unsigned int
 * containing the value to which the specified bits are to be set, right adjusted in the unsigned int;
 * a third int that specifies the starting bit number (with the leftmost bit numbered 0); and a 
 * fourth int specifying the size of the field. So the call:
 * 	bitpat_set (&x, 0, 2, 5);
 * has the effect of setting the five bits contained in x, begining with the third bit from
 * the left (bit number 2), to 0. Similarly, the call
 * 	bitpat_set (&x, 0x55u, 0, 8); 
 * sets the eight leftmost bits of x to hexadecimal 55.
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
        return (counter - 1);
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

//extracts a specified set of bits from source starting at start
int bitpat_get(unsigned int source, int start, int n)
{
        unsigned int temp, nTempBits,nSourceBits,intSize, offset;

        intSize = int_size();
        nSourceBits = numberOfBits(source);

        temp = ~0;
        temp = temp >> (intSize - nSourceBits);
        temp = temp >> start;
        nTempBits = numberOfBits(temp);
        temp = temp & source;
        if (nTempBits >= n)
        {
                offset = nTempBits - n;
                temp = temp >> offset;
        }
        return temp;
}

/*
 * Sets bits of size fieldSize within source to val starting at 
 * 'start'.
 	1. get the number of bits needed to represent source (lenSource)
 	2. get the bits left of 'start' index (bitpat_get(source, 0,start) - call this sleft.
 	3. leftshift sleft by (lenSource - start)
 	4. leftshift val by (lenSource - start) - fieldSize
 	5. get bits right of start + fieldSize, sright = bitpat_get(source, start + filedSize, lenSource - (start + fieldSize))
 	6. source = sleft & val & sright
 */
void bitpat_set (int *source, int val, int start, int fieldSize)
{
	unsigned int lenSource, sleft, sright, temp;
	
	lenSource = numberOfBits(*source);
	sleft = bitpat_get (*source, 0, start);
	temp = numberOfBits(sleft);
	sleft = sleft << (lenSource - temp);
	//sleft = sleft << (lenSource - start);
	val = val << ((lenSource - start) - fieldSize);
	sright = bitpat_get(*source, (start + fieldSize), lenSource - (start + fieldSize));
	*source = sleft | val | sright;
	printf("sleft: %u, val: %u, sright: %u\n",sleft, val, sright);
	printf("lenSoruce %u\n", lenSource);
}

int main (void)
{
	unsigned int source, val, start, fieldSize;
	
	printf("Enter source val start fieldSize :");
	scanf("%u %u %u %u", &source, &val, &start, &fieldSize);
	
	bitpat_set(&source, val, start, fieldSize);
	printf("%u \n", source);
	
	return 0;
}
