//Program to generate table of prime numbers

#include <stdio.h>

int main(void)
{
	int p, d;
	_Bool isPrime;

	for ( p =3; p <= 50; p += 2 )
	{
		isPrime = 1;

		for (d = 2; d < p ; d++)
		{
			if ( p % d == 0 )
			{
				isPrime = 0;
				break;
			}
		}

		if ( isPrime != 0 )
			printf ("%i ",p);
	}
	printf("\n");
	return 0;
}
