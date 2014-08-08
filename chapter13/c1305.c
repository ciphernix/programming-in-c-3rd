/*
 *Chapter 13 exercise 5:
 *Write a macro SHIFT to perform the identical purpose as the 
 *shift function of Program 12.3.
 *
 */

#include <stdio.h>

#define shift(value,n) ( (n) > 0 ? (value) << (n) : ((n) < 0 ? (value) >> (-(n)) : value) )

int main (void)
{
	unsigned int w1 = 0177777u, w2 = 0444u;
	
	printf ("%o\t%o\n", shift (w1, 5), w1 << 5);
	printf ("%o\t%o\n", shift (w1, -6), w1 >> 6);
	printf ("%o\t%o\n", shift (w2, 0), w2 >> 0);
	printf ("%o\n", shift (shift (w1, -3), 3));
	
	return 0;
}
