/*
* Chapter 10 Exercise 6
* remove string (text, 4, 6)
* Removes the specified number of chars 
* remove string(char source[], int start, int n)
*/

#include <stdio.h>


void removeString(char source[], int start, int n)
{
	int stringLen(const char string[]);
	void copyString(char source[], char target[] );
	int len = stringLen(source);
	int i,j;
	char temp[len];

	//copy from 0 to start
	for ( i = 0; i < start; i++)
    		temp[i] = source[i];

	//copy from total+1 to end of string
	for( j = start + n  ; j < len  ; j++ )
	{
		temp[i] = source[j];
		i++;
	}

	temp[i] = '\0';
	copyString(temp, source);
}

//function to copy one source string into target string
void copyString(char source[], char target[] )
{
	int stringLen(const char string[]);
	int len = stringLen(source);
	int i = 0;

	while ( i <= len)
	{
		target[i] = source [i];
		i++;
	}
}

int stringLen(const char string[])
{
     int n = 0;
     while ( string[n] != '\0' )
          n++;
     return n;
}

int main(void)
{
	
	char source[] = "the wrong son";
	removeString(source, 4, 6);

	printf("%s\n", source);
	
	char source2[] = "Hello World";

	removeString(source2,0,1);
	printf("%s\n", source2);
	
	removeString(source2,0,20);
	printf("%s\n", source2);
	return 0;
}
