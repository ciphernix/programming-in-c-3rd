/*
 *Write a function called bit_test that takes two arguments:
 *an unsigned int and a bit number n. Have the function return 1 bit number n 
 *if it is on inside the word, and 0 if it is off. 
 *Assume that bit number 0 references the leftmost 
 *bit inside the integer. Also write a corresponding function called bit_set 
 *that takes two arguments: an unsigned int and a bit number n. Have the 
 *function return the result of turning bit n on inside the integer.
 */

#include <stdio.h>
#include <stdbool.h>

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


bool bit_test(unsigned int x, int n)
{
	/*algorithm:
	 *1. j = int_size()
	 *2.temp = 1 << j (left shift 1 j times to place bit on the left)
	 *3.temp = temp >> n
	 *3.temp & x == temp if n bit is set
	 */
	int j = int_size();
	unsigned int temp = 1 << j;
	temp = temp >> n;
	if ((temp & n) == temp) //nbit is set
		return true;
	else  
		return false;
}

int bit_set(unsigned int x, int n)
{
	int j = int_size();
	unsigned int temp = 1 << j;
	temp = temp >> n;
	return (temp | x);
}

int main (void)
{
	unsigned int x, n;
	
	printf("Enter int x and bit number to test: ");
	scanf("%i %i", &x, &n);
	
	if (bit_test(x,n))
		printf("Bit %i is set on %i\n", x,n);
	else {
		printf("Bit %i is not set, setting...\n", n);
		x = bit_set(x,n);
		printf("New value of x: %i\n", x);
	}
	
	return 0;
}
