#include <stdlib.h>
#include <stdio.h>
//Function to open files
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
