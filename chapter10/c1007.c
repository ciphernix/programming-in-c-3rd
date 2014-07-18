/*
 * Chapter 10 Exercise 7
 * insertString(char s1[], char s2[], int n)
 * inserts string s2 into s1 starting at position n of s1
*/

#include <stdio.h>
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

int stringLen(const char string[])
{
     int n = 0;
     while ( string[n] != '\0' )
          n++;
     return n;
}

int main (void)
{
	char text[81] = "the wrong son";
	
	insertString(text, "per", 10);
	printf("%s\n", text);

	insertString(text, "crazy ", 4);
	printf("%s\n", text);

	insertString(text, " is here ", stringLen(text));
	printf("%s\n", text);
	return 0;
}
