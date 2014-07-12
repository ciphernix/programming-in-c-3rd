/* Program to count the number of responses that responded 1-10 to the survey
 *
 */

#include <stdio.h>

int main (void)
{
	
	/*Use an 11 element array so that each index corresponse to each answer
	 * ratingCounters[1] = 1... etc.
	 * Then we can simply use the array index to hold the number of times 
	 * each answer appera... e.g. the number of 1s 2s.. etc.
	 */

	int ratingCounters[11], i, response;
	
	for (i = 1; i <= 10; i++)
	{
		ratingCounters[i] = 0;
	}

	printf("Enter your responses. Enter '99' when done.\n");
	while ( 1 )
	{
		scanf("%i", &response);
		if (response < 1 || (response> 10 && response != 99) )
		{
			printf ("Bad response: %i\n", response);
		}else if (response == 99){
		
			break;
		}else{
		
			++ratingCounters[response];
		}
	}
	
	printf("\n\nRating\tNumber of Responses\n");
	printf("------\t-------------------\n");

	for (i=1; i<= 10; i++ )
	{
		printf("%4i%14i\n", i, ratingCounters[i]);
	}

	return 0;
}

