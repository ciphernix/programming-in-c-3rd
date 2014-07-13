/*
 * Program to calculate day of the week
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
	int adjust_n(struct date toCompute);
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

	n = n + adjust_n( toCompute );
	return n;
}

int adjust_n(struct date toCompute)
{
	/*This function will adjust the value of n base on the following:
	 *if date is greater than or equal to March 1, 1990 - no adjustment needed, return 0.
	 *if date is between March 1, 1800 and Febreuary 28 1900, add 1 to n, return 1.
	 *if date is between March 1, 1700 and Febreuary 28 1800, add 2 to n, return 2.
	 * Dates befores March 1, 1700 are not supported.
	 */
	
	int temp_date;

	temp_date = (toCompute.year * 100) + (toCompute.month * 100) + toCompute.day;

	if ( temp_date >= 190301 )
		return 0;
	else if (temp_date >=180301)
		return 1;
	else if (temp_date >= 170301)
		return 2;
	else
	{
		printf("Unsupported date %i %i %i\n ", toCompute.month, toCompute.day, toCompute.year);
		return -1;
	}
}

int get_day ( int n)
{
	//Returns day of the week 0 - 6.
	//0 is Sunday and 6 is Saturday
	int day;

	day = ( n - 621049 ) % 7;

	return day;
}

void display_day (int n)
{
	//Display day of the week
	
	switch (n)
	{
		case 0:
			printf("Sunday");
			break;
		case 1:
			printf("Monday");
			break;;
		case 2:
			printf("Tuesday");
			break;;
		case 3:
			printf("Wednesday");
			break;;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		default:
			printf("%i", n);
			break;
	}
	printf("\n");

	return;

}


int main (void)
{
	int ndays( struct date toCompute );
	int get_day ( int n);
	void display_day (int n);

	struct date d1;
	int n, day;

	printf("Enter date (mm dd yyyy): ");
	scanf("%i%i%i", &d1.month, &d1.day, &d1.year);
	
	n = ndays( d1 );
	day = get_day (n);	
	printf("Falls on ");
	display_day ( day );

	return 0;
}
