/*
 * Program that calculates the number of elapse days between dates
 */

#include <stdio.h>
#include <stdbool.h>

struct date
{
	int month;
	int day;
	int year;
};

int ndays( struct date toCompute )
{
	int f, g, n;

	if ( toCompute.month <= 2 )
	{
		f = toCompute.year - 1;
		g = toCompute.month + 13;
	}
	else
	{
		f = toCompute.year;
		g = toCompute.month + 1;
	}
	
	//printf("f is %i\ntoComputer.year is %i\n",f,toCompute.year);
	//printf("g is %i\n",g);
	n = ( (1461 * f ) / 4 ) + ( ( 153 * g ) / 5 )  + toCompute.day ;

	//if ( toCompute.year >= 1900 && toCompute.month <= 2
	//still need to account for dates prior to March 1 1900.
	
	return n;
}

int main (void)
{
	int ndays( struct date toCompute );
	struct date d1;
	struct date d2;
	int n1, n2;

	printf("Enter date1 (mm dd yyyy): ");
	scanf("%i%i%i", &d1.month, &d1.day, &d1.year);
	
	n1 = ndays( d1 );
	//printf("n1 is %i\n", n1);

	printf("Enter date2 (mm dd yyyy): ");
	scanf("%i %i %i", &d2.month, &d2.day, &d2.year);

	n2 = ndays (d2);
	//printf("n2 is %i\n", n2);

	printf ( "The number of days elapsed is %i\n", n2 - n1);

	return 0;
}
