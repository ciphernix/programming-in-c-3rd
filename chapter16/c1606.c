/*
 *Chapter 16 exercise 6:
 *Write a program that displays the contents of a file at the terminal 20
 *lines at a time. At the end of each 20 lines, have the program wait for a
 *character to be entered from the terminal. If the character is the letter 
 *q, the program should stop the display of the file; any other character
 *should cause the next 20 lines from the file to be displayed.
 */

#include <stdio.h>
#include "open.h"

int main(void)
{
	FILE *open(char filename[]);
	FILE *f;
	char filename[64];
	char c,input[2];
	int i, linecount = 0;
	
	printf("Filename : ");
	scanf("%63s",filename);
	f = open(filename);
	
	while((c = getc(f)) != EOF)
	{
		if (c == '\n')
			linecount++;
		if (linecount == 20)
		{
			linecount = 0;
			printf(":");
		        scanf("%1s", input) ;
			if (input[0] == 'q' || input[0] == 'Q')
			{
				fclose(f);
				return 0;
			}
		}
		printf("%c",c);
	}
	printf("\n");	
	fclose(f);
	return 0;
}
