#include <stdio.h>

int main(void)
{
	char input[81];
	char input2[81];
	int n;
	int i;

	printf(" : ");
	scanf("%80[^\n]%n", input, &n);
	printf("input = %s\nn = %i\n", input, n);

	printf(" : ");
	scanf("%80[^q]%n", input2, &i);
	printf("input2 = %s\ni = %i\n", input2, i);
	return 0;
}

