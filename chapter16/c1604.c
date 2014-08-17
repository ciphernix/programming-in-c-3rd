/*
 * Write a program that merges lines alternately from two files and writes the
 * results to stdout. If one file has less lines than the other, the remaining
 * lines from the larger file should simply be copied to sdout.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

FILE *open(char filename[])
{
	FILE *f;
	if ( (f = fopen(filename, "r") ) == NULL )
	{
		printf("Unable to open file %s\n", filename);
		exit(EXIT_FAILURE);
	}else
		return f;
}

int main (void)
{
	FILE *file1, *file2;
	FILE *open(char filename[]);
	bool c1_read = true, c2_read = true;
	char filename1[64], filename2[64];
	char c1, c2;

	printf("Program to merge two lines alternately from two files and"\
			"writes the results to sdout.\n\n");
	printf("Enter file1 file2 : ");
	scanf("%63s %63s", filename1, filename2);
	
	file1 = open(filename1);
	file2 = open(filename2);

	while (c1_read || c2_read )
	{
		while (c1_read )
		{
			c1 = getc(file1);
			if (c1 == EOF)
				c1_read = false;
			else
			{
				printf("%c",c1);
				if c
			}

				c1_read
			printf("%c",c1);

		while( (c2 = getc(file2) ) != EOF)
			printf("%c",c2);

		if (c1 == EOF && c2 == EOF)
			break;
	}
	fclose(file1);
	fclose(file1);
	return 0;
}
