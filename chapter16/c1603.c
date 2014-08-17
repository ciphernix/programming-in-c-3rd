/*
 *Write a program to copy one file to another, replacing all lowercase
 *characters with their uppercase equivalents
 */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


int  main(void)
{
	FILE *file1, *file2;
	char filename1[64], filename2[64];
	int c;
	
	printf("Program to copy one text file to another, replaying all lower" \
			" case to upper case\n");
	printf("Enter file1(source) file2(target) :");
	scanf("%63s %63s", filename1, filename2);
	
	if ( (file1 = fopen(filename1, "r")) == NULL)
	{
		printf ("Unable to open file %s \n", filename1);
		exit(EXIT_FAILURE);
	}

	if ( (file2 = fopen(filename2, "w")) == NULL )
	{
		printf("Unable to open file %s \n", filename2 );
		exit(EXIT_FAILURE);
	}

	while ( (c = getc (file1)) != EOF )
	{
		putc (toupper(c), file2);
	}

	fclose(file1);
	fclose(file2);

	return 0;
}
