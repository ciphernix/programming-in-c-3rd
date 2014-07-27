/*
 * Chapter 11 exercise 10:
 * Rewrite the compareStrings function from Chapter 10 to use character pointers
 * instead of arrays.
 */

#include <stdio.h>

/* Original function for reference
 *
 * int compareStrings (const char s1[], const char s2[])
 *{
 *       int i = 0, answer;
 *
 *        while ( s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' )
 *               i++;
 *
 *       if ( s1[i] < s2[i] )
 *               answer = -1;    // s1 < s2
 *       else if (s1[i] == s2[i] )
 *               answer = 0;     // s1 == s2 
 *       else 
 *               answer = 1;     // s1 > s2 
 *
 *       return answer;
 * }
*/

int compareString (const char const *s1, const char const *s2)
{
	while (*s1 == *s2 && *s1 != '/0' && *s2 != '/0')
	{
		s1++;
		s2++;
	}
	if (*s1 < *s2)
		return -1;
	else if (*s1 == *s2)
		return 0;
	else
		return 1; // s1 >s2
		
}

void readLine (char *buffer)
{

	do
	{
		*(buffer++) = getchar();
	}while ( *(buffer - 1) != '\n' );
	
	*(--buffer) = '\0';
}


int main (void)
{
	char s1[81], s2[81];
	int res;
	
	printf("S1: ");
	readLine(s1);
	printf("S2: ");
	readLine(s2);
	
	res = compareString(s1, s2);
	
	if (res == 1 )
	{
		printf("%s is greater than %s\n", s1, s2);
	}
	else if (res == 1 )
	{
		printf("%s is less than %s\n", s1, s2);
	} 
	else {
		printf("%s is equal to %s\n", s1, s2);
	}
	
	return 0;
}