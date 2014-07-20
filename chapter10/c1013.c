/*
 * Chapter 10 exercise 13.
 * Program to convert all lowercase characters in a string
 * to upper case.
 */

#include <stdio.h>

void uppercase(char string[] )
{
	int i;

	for ( i = 0; string[i] != '\0'; i++ )
	{
		if (string[i] >= 'a' && string[i] <= 'z' )
			string[i] = string[i] - 'a' + 'A';
	}
}

int main (void)
{
        void uppercase(char string[] );
        char string[81];
        
        printf("Enter string : ");
        gets(string);
        
	uppercase(string);
        printf("%s\n",string);

        return 0;
}
