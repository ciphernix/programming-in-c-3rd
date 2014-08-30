/*
 * Simple echo clone.
 */

#include <stdio.h>

#define TRUE 1
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("\n");
		return 0;
	}
	
	argv++;
	while ( TRUE )
	{
		printf("%s",*argv);
		argv++;
		if (*argv == NULL)
			break;
		else
			printf(" ");
	}
	printf("\n");
	return 0;
}

