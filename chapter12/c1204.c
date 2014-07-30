/*Using the result obtained in exercise 3, modify the rotate function from 
 *Program 12.4 so that it no longer makes any assumptions about the 
 *size of an int.
 */
 
#include <stdio.h>

int main (void) 
{
	unsigned int w1 = 0xabcdef00u, w2 = 0xffff1122u; 
	unsigned int rotate (unsigned int value, int n);
	
	printf ("%x\n", rotate (w1, 8)); 
	printf ("%x\n", rotate (w1, -16));
	printf ("%x\n", rotate (w2, 4)); 
	printf ("%x\n", rotate (w2, -2)); 
	printf ("%x\n", rotate (w1, 0)); 
	printf ("%x\n", rotate (w1, 44));
	
	return 0; 
}

//function to determine the size of an int
int int_size(void)
{
	unsigned int n = ~0;
	int counter = 0;
	
	while ( n > 0 )
	{
 		n = n >> 1;
 		counter++;
	}
	return counter - 1; //account for sign bit
}
// Function to rotate an unsigned int left or right
unsigned int rotate (unsigned int value, int n) 
{
	unsigned int result, bits;
	
	int intSize = int_size() + 1;
	
	// scale down the shift count to a defined range
	if (n>0) 
		n = n % intSize;
	else
		n = -(-n % intSize);

	if (n==0) 
		result = value;
	else if(n>0)
	{
		//leftrotate 
		bits = value >> (intSize - n);
		result = value << n | bits;
	}
	else 
	{ 
		// right rotate
		n = -n;
		bits = value << (intSize - n); 
		result = value >> n | bits;
	}
	
	return result;
}

