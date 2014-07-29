/*
 *Chapter 12 exercise 3:
 *Given that the expression ~0 produces an integer that contains all 1s
 *write a function called int_size that returns the number of bits contained
 *in an int on your particular machine.
 */
 
int int_size(void)
{
	unsigned int n = ~0;
	int counter = 0;
	
	while ( n > 0 )
	{
 		n = n >> 1;
 		countr++:
	}
	return counter - 1; //account for sign bit
}

int main(void)
{
	printf("A signed int has %i bits\n", int_size());
	
	return 0;
}
