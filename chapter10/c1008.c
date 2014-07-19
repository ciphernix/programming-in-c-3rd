/* 
 * Chapter 10 Exercise 8 and 9
 * using findString, removeString, and insertString
 * write a function bool replaceString(source, s1, s2)
 * to find s1 inside source and replace it with s2
 */

#include <stdio.h>
#include <stdbool.h>

//inserts s2 into s1 at position m
void insertString(char s1[], const char s2[], int n)
{
	void copyString(char source[], char target[] );
	int stringLen(const char string[]);
	int lenS1 , lenS2;
	int i = 0;
	int j = 0;
	lenS1 = stringLen(s1);
	lenS2 = stringLen(s2);
	char temp[lenS1 + lenS2 ];

	//copy the first part of s1 into temp
	while ( i < n )
	{

        	temp[i] = s1[i];
        	i++;
	}

	//copy s2
	while ( j < lenS2)
	{

		temp[n] = s2[j];
		j++;
		n++;
	}

	//copy the remaining of s1 into temp
	while ( i < lenS1 )
	{
		temp[n] = s1[i];
		n++;
		i++;
	}
	
	temp[n] = '\0';
	copyString(temp, s1);
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

//returns the length of a string, up to the '\0' char
int stringLen(const char string[])
{
     int n = 0;
     while ( string[n] != '\0' )
          n++;
     return n;
}

//removes n chars from source starting at int start
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

//returns the starting location of string within char
//returns -1 if the location doesnt exist
int findString(char source[], char string[])
{
	int stringLen(const char string[]);
	int len, source_len, start, i;

	len = stringLen(string);
	source_len = stringLen(source);
	for (start = 0; start + len <= source_len; start++)
	{
		i = 0;
		while( (i < len) && (source[start + i] == string[i]) )
			i++;
		if ( i == len) //i has the same value as start + len then source[i] and string[i] must have the same blue
			return start;
	}

	//if we are outside the loop, return -1
	return -1;

}

//finds and replace s1 within 
bool replaceString(char source[], char s1[], char s2[])
{
	int findString(char source[], char string[]);
	void removeString(char source[], int start, int n);
	void insertString(char s1[], const char s2[], int n);
	//void copyString(char source[], char target[] );
	int stringLen(const char string[]);
	
	bool found,success;
	int location,len;
	
	
	
	location = findString(source, s1);
	if (location > -1)
		{
			found = true;
			len = stringLen(s1);
			removeString(source, location, len);
			insertString(source, s2, location);
		}
	else {
		found = false;
	}
		
	return found;
}

int main (void)
{
	char text [999];
	char s1[81];
	char s2[81];
	char all = 'n';

	printf("Enter text: ");
	gets(text);

	printf("Find what: ");
	gets(s1);

	printf("Replacement: ");
	gets(s2);
	
	printf("Replace all \? [y/n]: ");
	all = getchar();
	if ( all == 'y' )
	{

		while (replaceString(text,s1, s2))
			continue;
	}else
		replaceString(text,s1, s2);

	printf("%s\n",text);

	return 0;
}
