/*
 *Chapter 12 exercise 6:
 *Write a function called bitpat_search that looks for the occurrence of a 
 *speci- fied pattern of bits inside an unsigned int.The function should take 
 *three argu- ments and should be called as shown:
 *		bitpat_search (source, pattern, n)
 *The function searches the integer source, starting at the leftmost bit, to 
 *see if the rightmost n bits of pattern occur in source. If the pattern is 
 *found, have the function return the number of the bit at which the pattern 
 *begins, where the left- most bit is bit number 0. If the pattern is not 
 *found, then have the function return –1. So, for example, the call
 *	index = bitpat_search (0xe1f4, 0x5, 3);
 *causes the bitpat_search function to search the number 0xe1f4 ( = 1110 0001 
 *1111 0100 binary ) for the occurrence of the three-bit pattern 0x5 (= 101 
 *binary). The function returns 11 to indicate that the pattern was found in 
 *the source beginning with bit number 11.
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

//main function to test
int main (void)
{
	int pattern, n;
	
	printf("Enter pattern n : ");
	scanf("%i %i", &pattern, &n);
	printf("The %i most bits of %i is %i\n",n,pattern, right_most(pattern, n));
	return 0;
}
