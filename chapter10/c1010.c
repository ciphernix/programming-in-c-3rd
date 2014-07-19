/*
 * Chapter 10 exercise 10. Write a function called dictionarySort that sorts as dictionary as defined
 * in program 10.9 and 10.10 from the textbook. 
 * The function should sort the dictionary in alphabetical order.
 */

#include <stdio.h>
#include <stdbool.h>

struct entry
{
	char word[15];
	char definition[50];
};

//Function to compare two strings

int compareStrings (const char s1[], const char s2[])
{
	int i = 0, answer;

	while ( s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' )
		i++;

	if ( s1[i] < s2[i] )
		answer = -1;	/* s1 < s2 */
	else if (s1[i] == s2[i] )
		answer = 0;	/* s1 == s2 */
	else 
		answer = 1;	/* s1 > s2 */

	return answer;
}

//Function to lookup a word inside a dictionary
int lookup (const struct entry dictionary[], const char search [], const int entries)
{
	int low = 0;
	int high = entries -1;
	int mid,result;
	int compareStrings (const char s1[], const char s2[]);

	while ( low <= high )
	{
		mid = ( low + high ) / 2;
		result = compareStrings (dictionary[mid].word, search);

		if ( result == -1 )
			low = mid + 1;
		else if ( result == 1 )
			high = mid - 1;
		else
			return mid; 	/* found it */
	}

	return -1;	/*not found */
}

//Sorting function using compare strings

void sort(struct entry dictionary[], int n)
{	
	struct entry temp;
	int compareStrings (const char s1[], const char s2[]);
	int i;
	bool sorted;
	
	do
	{	
		sorted = false;
		for (i = 0; i + 1 < n ; i++ )
		{
			if (compareStrings (dictionary[i].word, dictionary[i+1].word ) == 1 ) //word1 is greater than word 2
			{	
				temp = dictionary[i];
				dictionary[i] = dictionary[i+1];
				dictionary[i+1] = temp;
				sorted = true;
	
			}
		}
	}while (sorted == true);


}

int main (void)
{
	struct entry dictionary[100] = 
	{	{ "aardvark", "a burrowing African mammal" },
		{ "test",   "a test word!"},
		{ "abyss", "a bottomless pit" },
		{ "acumen", "mentally sharp; keen" },
		{ "addle", "to become confused" },
		{ "aerie", "a high nest" },
		{ "affix", "to append; attach" },
		{ "agar",  "a jelly made from seaweed" },
		{ "ahoy",  "a nautical call of greeting" },
		{ "aigrette", "an ornamental cluster of feathers" },
		{ "ajar", "partially opened" }
	};

	int entries = 11;
	char word[15];
	int entry;
	int lookup (const struct entry dictionary[], const char search[], const int entries);
	char QUIT = 'n' ;
	bool sorted = false;
	while (true )
	{	
		if (sorted == false)
		{	
			sort(dictionary, entries);
			sorted = true;
		}

		printf("Enter word: ");
		scanf("%14s", word);
		
		entry = lookup (dictionary, word, entries);

		if (entry != -1 )
			printf ("%s\n", dictionary[entry].definition);
		else 
			printf ("Sorry, the word %s is not in my dictionary.\n", word);

		printf("Quit ? [y/n] : ");

		QUIT = getchar();
		QUIT =  getchar();

		if ( QUIT == 'y' )
			return 0;
	}
	return 0;

}

