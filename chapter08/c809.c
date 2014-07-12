/* Program to calculate the least common multiple.
 */

#include <stdio.h>

long unsigned int lcm (int u, int v)
{
	int gcd (int u, int v);
	
	return (u * v) / gcd (u, v);
}

int gcd (int u, int v)
{
	int temp;

	while ( v != 0 )
	{
		temp = u % v;
		u = v;
		v = temp;
	}

	return u;
}

int main (void)
{
	int u, v;
	long unsigned int lcm (int u, int v);

	printf("Enter two positive integers u v : ");
	scanf("%i %i", &u, &v);

	printf("The lcm of %i and %i is %lu\n", u,v, lcm(u,v));

	return 0;
}
