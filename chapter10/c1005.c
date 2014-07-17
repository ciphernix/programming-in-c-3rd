/*
 * Chapter 10 exercise 5.
 * findString function: determines if one character string exists inside another string.
 * The first argument to the function should be the character string that is to be searched
 * and the second arguement is the string we want to find. If the function finds the string,
 * it will return the location in the source string in which the string is foind.
 * e.g: findStrinf("a chatterbox", "hat"); returns 3.
 */

#include <stdio.h>
#include <stdbool.h>

int findString(const char source[], char string[])
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




/* function to find length of a string
* this could be done using the standard lib using string.h
* I'm implanting this for the sake of learning
*/

int stringLen(const char string[])
{
     int n = 0;
     while ( string[n] != '\0' )
          n++;
     return n;
}

int main(void)
{
	int findString(const char source[], char string[]);
	int i;

	i = findString("A chatterbox", "hat");
	printf("%i\n",i);

	i = findString("Hello!", "Rorld");
	printf("%i\n",i);

	i = findString("Hello!", "Hello!");
	printf("%i\n",i);
	i = findString("Hello world Hello!", "Hello!");
	printf("%i\n",i);
	return 0;
}
