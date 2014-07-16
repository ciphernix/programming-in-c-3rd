/*
 * Chapter 10 exercise 3. Modify program 10.7 and 10.8 to correctly count words with aspostrophe
 * will also count sequences of numbers with commas or periods as a single word.
 * Program makes use of "isspace" char function
 */
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>


//Returns false if c is a space char (white space, tab, return).
bool alphabaticNum (const char c)
{
	if ( isspace ( c) )
		return false;
	else
		return true;
}

//Function to count the number of words in a string

int countWords (const char string[] )
{
	int i, wordCount = 0;
	bool lookingForward = true, alphabetic (const char c);

	for ( i = 0; string [i] != '\0'; i++ )
		if ( alphabaticNum( string[i]) )
		{
			if ( lookingForward )
			{
				wordCount++;
				lookingForward = false;
			}
		}
		else
			lookingForward = true;
	return wordCount;
}

void readLine (char buffer[])
{
	char character;
	int i = 0;

	do
	{
		character = getchar ();
		buffer[i] = character;
		i++;
	}
	while (character != '\n' );

	buffer[i-1] = '\0';
}

int main (void)
{
	char text[81];
	int totalWords = 0;
	int countWords (const char string[]);
	void readLine (char buffer [] );
	bool endOfText = false;

	printf ("Type in your text.\n");
	printf ("When you are done, press \"RETURN\".\n\n");

	while ( ! endOfText )
	{
		readLine (text);

		if ( text[0] == '\0')
			endOfText = true;
		else
			totalWords += countWords (text);
	}

	printf ("\nThere are %i words in the above text.\n", totalWords);
	return 0;
}

