/*
 * Chapter 12 exercise 8:
 * Write a function called bitpat_set to set a specifid set of bits to a particular value.
 * The function should take four arguements:
 * a pointer to an unsigned int in which the specified bits are to bet set; another unsigned int
 * containing the value to which the specified bits are to be set, right adjusted in the unsigned int;
 * a third int that specifies the starting bit number (with the leftmost bit numbered 0); and a 
 * fourth int specifying the size of the field. So the call:
 * 	bitpat_set (&x, 0, 2, 5);
 * has the effect of setting the five bits contained in x, beggining with the third bit from
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

//function to return the n right most bits
int right_most(int pattern, int n)
{
        int temp, rightMost;

        temp = ~0;
        temp = temp << n;
        temp = ~temp;
        rightMost = pattern & temp;

        return rightMost;
}


