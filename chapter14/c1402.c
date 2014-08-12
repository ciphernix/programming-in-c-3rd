/*
 *Write a function called monthName that takes as its argument a value of 
 *type enum month (as defined in this chapter) and returns a pointer to a
 *character string containing the name of the month. In this way, you can
 *display the value of an enum month variable with a statement such as:
 *	printf (“%s\n”, monthName (aMonth));
 */

#include <stdio.h>
enum month { january = 1, february, march, april, may, june, \
	july, august, september, october, november, december };

char *monthName(enum month amonth)
{
	char *res;
	
	switch (amonth) {
		case january:
			res = "January";
			break;
		case february:
			res = "February";
			break;
		case march:
			res = "March";
			break;
		case april:
			res = "April";
			break;
		case may:
			res = "May";
			break;
		case june:
			res = "June";
			break;
		case july:
			res = "July";
			break;
		case august:
			res = "August";
			break;
		case september:
			res = "September";
			break;
		case october:
			res = "October";
			break;
		case november:
			res = "November";
			break;
		case december:
			res = "December";		
			break;
		default:
			res = "Bad month";
			break;
		}
		return res;	
}

//same solution but using an array
char *monthNameArray(enum month amonth)
{
	char *months[] = {"no month", "January", "February", "March", \
		"April", "May", "June", "July", "August", "September", "October", \
		"November", "December"};
	
	return months[amonth];
}

int main (void)
{
	enum month amonth;
	printf("Enter digit month: ");
	scanf("%i", &amonth);
	
	printf("Using monthName %s\n",monthName(amonth));
	printf("Using monthNamArray %s\n",monthNameArray(amonth));
	
	return 0;
}