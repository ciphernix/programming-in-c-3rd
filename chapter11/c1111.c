/*
 *Chapter 11 exercise 11:
 *given the the def of a date structure as define in this chapter
 * struct date
 * {
 *  	int month;
 *		int day;
 *		int year;
 * };
 * write a function called dateUpdate that takes a pointer to a date
 * structure as its arguement and thst updates the structue to the following
 * day.
 */
 
#include <stdio.h>
#include <stdbool.h>
 
struct date
{
 	int month;
 	int day;
 	int year;
}

//function to determine if a year is leap 
bool isLeap(int year)
{
 	if ((year % 4 == 0 && year % 100 != 0) ||
 			year % 400 == 0)
 			return true;
 	else 
 		return false;
}
 
//function to determine the numbers of days in a montg 
int daysInMonth (struct date *newDate)
{
 	int month[12] = { 0, 31, 28, 31, 30, 31, 30, 31
 						31, 30, 31, 30, 31};
 	int i = newDate->month;
 	int year == newDate->year;
 	
 	if (i == 2 && isLeap(year))
 		month[i]++;
 	
 	return month[i];
}
 
 
void dateUpdate (struct date *newDate)
{
 	if ((newDate->day) < daysInMonth(newDate) )
 		newDate->day++;
 	else 
 	{
 		newDate->day = 1;
 		if ((newDate->month) < 12)
 			newDate->month++;
 		else 
 		{
 			newDate->month = 1;
 			newDate->year++;
 		}	
 	}
}

int main(void)
{
	struct date newDate;
	
	printf("Enter date (dd-mm-yyyy): ");
	scanf("%i-%i-%i", &newDate.day, &newDate.month, &newDate.year);
	dateUpdate(&newDate);
	printf("%2i-%2i-%4i\n",newDate.day, newDate.month, newDate.year);
	
	return 0;
}
