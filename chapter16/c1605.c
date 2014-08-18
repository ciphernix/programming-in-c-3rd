/*
 *Chapter 16 exercise 5:
 *Write a program that writes columns m through n of each line of a file 
 *to stdout. Have the program accept the values of m and n from the 
 *terminal window.
 */

#include <stdio.h>
#include "open.h"

int main(void)
{
	FILE *open(char filename[]);
	FILE *f;
	int m, n, col =1;
	char filename[64];
	char c;
	
	printf("Enter file name: ");
	scanf("%63s", filename);
	f = open(filename);
	
	printf("Enter column numbers m,n : ");
	scanf("%i %i", &m, &n);
	
	while((c = getc(f)) != EOF)
	{	
		if (col >= m && col <= n)
			printf("%c", c); 
		if (c == ' ')
			col++;
		if (c == '\n')
			col = 1;		
	} 
	fclose(f);
	return 0;
}