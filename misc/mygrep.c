/*
 * Basic grep clone.
 */

#include <string.h>
#include "open.h"

int main(int argc, char *argv[])
{
	FILE *f;
	char *word;
	char *filename;
	int n = 1000;
	char buffer[n];

	if (argc != 3)
	{
		printf("\nUsage: %s <phrase> <file>\n", argv[0]);
		return -1;
	}

	filename = argv[2];
	word = argv[1];

	f = open(filename);
	
	while ( fgets(buffer, n, f) )
	{
		if (strstr(buffer, word) != NULL )
			printf("%s", buffer);

	}
	return 0;
}



