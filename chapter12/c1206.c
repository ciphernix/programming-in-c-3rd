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
 *causes the bitpat_search function to search the number 0xe1f4 
 *( = 1110 0001 1111 0100 binary ) for the occurrence of the three-bit
 *pattern 0x5 (= 101 binary). 
 *The function returns 11 to indicate that the pattern was found in 
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

/*The function searches the integer source, starting at the leftmost bit, to 
 see if the rightmost n bits of pattern occur in source.
 	algo:
		1. Get the n right most bits of pattern (rightMost)
		2. Get the number of bits in source (SourceBits)
		3. leftshift RightMost by SourceBits - n
		4. set index to 0
		5. while (index + n < SourceBits)
		6. 	if RightMost & Pattern == RightMost, return index
		7.	else rightshift RightMost by one, increase index by 1
		8. end while.
		9. If we exit out of the while loop, return -1.
		***********************The above doesn't work********
		****Lets  try the following********
		1. Get the n right most bits of pattern (pRightMost)
		2. Get the number of bits in source (sourceBits)
		3. set index to (sourceBits - n ) - 1
		4. if the n right most bits of source xor with pRightMost == 0, return index
		5. right shift source by n bits and decrase index by n, if n < 0 return -1, else go to step 4.
	*/

int bitpat_search (int source, int pattern, int n)
{
	int pRightMost, sourceBits, index;

	pRightMost = right_most(pattern, n);
	sourceBits = numberOfBits(source);
	index = (sourceBits - n ) - 1;
	while ( index >= 0 )
	{
		if ( (right_most(source, n) ^ pRightMost) == 0 )
			return index;
		else
		{
			source = source >> n;
			index = index - n;
		}
	}

	return -1
}

/*
int bitpat_search (int source, int pattern, int n)
{
	int rightMost,index,nSourceBits;
	
	rightMost = right_most(pattern, n);
	nSourceBits = numberOfBits(source);
	rightMost = rightMost << (nSourceBits - n);
	printf("Rightmost %i \n", rightMost);
	printf("nSource %i \n", nSourceBits);
	
	index = 0;
	while ( (index + n) < nSourceBits)
	{
		if ( (rightMost & source) == rightMost )
			return index;
		else 
		{
			rightMost = rightMost >> 1;
			index++;
		}
	}
	return -1; //not found
}
*/
//main function to test
int main (void)
{
	int index, source, pattern, n;
	
	printf("Enter 3 ints (source pattern n ): ");
	scanf("%i %i %i", &source, &pattern, &n);
	printf("The %i most bits of %i is %i\n",n,pattern, right_most(pattern, n));
	index = bitpat_search (source, pattern, n);
	printf("Pattern is at index %i\n", index);
	
	return 0;
}
