/* exercise 1004.c 
* function to extract portion of a char string 
*/
#include <stdio.h>


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

void substring ( const char source[], int start, int count, char result[])
{
	int stringLen(const char string[]);
	int len;
	int n = count + start;
     	int i = 0;
	
	len = stringLen(source);
	
     	while(source[start] != '\0' && start < n && start < len)
     	{
        	result[i] = source[start];
          	i++;
          	start++;
        }
        
        	result[i] = '\0';
}

int main (void)
{
    	void substring ( const char source[], int start, int count, char result[]);
	static char source[] = "test string";
	char result[81];

	substring(source, 5,5, result);
	printf("%s\n", result);
	
	substring(source, 8, 6, result);
	printf("%s\n",result);

	substring(source, 0,5, result);
	printf("%s\n", result);

	substring(source, 10,5, result);
	printf("%s\n", result);

	substring("character", 4, 3, result);
	printf("%s\n", result);

	substring("two words", 4, 20, result);
	printf("%s\n", result);

	return 0;
}

