/*
 *Chapter 11 exercise 7
 *rewrite the sort function from chapter 8
 *using pointers.
 */
 
#include <stdio.h>

/*original function for reference
void sort (int a[], int n) 
{
	int i, j, temp;
	
	for(i = 0; i < n-1; ++i)
		for(j = i+1; j < n; ++j)
			if ( a[i] > a[j] ) 
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
}

int main (void) 
{
	int i;
	int array[16] = {34, -5, 6, 0, 12, 100, 56, 22,	
					44, -3, -9, 12, 17, 22, 6, 11 }; 
	void sort (int a[], int n);
	
	printf ("The array before the sort:\n");
	for(i = 0; i < 16; ++i) 
		printf ("%i ", array[i]);
		
	sort (array, 16);
	
	printf ("\n\nThe array after the sort:\n");
	for(i = 0; i < 16; ++i) 
		printf ("%i ", array[i]);

	printf ("\n");
	
	return 0; 
}
*/

void sort (int *array, int *n)
{
	int * const arrayEnd = array + *n;
	int temp;
	int *ptr;
	
	for(; array < (arrayEnd - 1); array++)
	{	for (ptr = (array + 1); ptr < arrayEnd; ptr++)
		{
			if (*array > *ptr)
			{
				temp = *array;
				*array = *(ptr);
				*ptr = temp;
			}
		}
	}
}

int main (void) 
{
        int i;
        int array[16] = {34, -5, 6, 0, 12, 100, 56, 22, 
                                        44, -3, -9, 12, 17, 22, 6, 11 }; 
        void sort (int *a, int *n);
        
        printf ("The array before the sort:\n");
        for(i = 0; i < 16; ++i) 
                printf ("%i ", array[i]);
        
        sort (array, &i);
        
        printf ("\n\nThe array after the sort:\n");
        for(i = 0; i < 16; ++i) 
                printf ("%i ", array[i]);
                        
        printf ("\n");          
                                
        return 0;               
}
