#include <stdio.h>

int main(void)
{
	char input[81];
	int n;

	printf	(" : ");
	scanf("%80[^q\n]%n", input, &n);
	printf("input = %s\nn = %i\n", input, n);

	return 0;
}

