/*
 *Write a function called monthName that takes as its argument a value of 
 *type enum month (as defined in this chapter) and returns a pointer to a
 *character string containing the name of the month. In this way, you can
 *display the value of an enum month variable with a statement such as:
 *	printf (“%s\n”, monthName (aMonth));
 */

#include <stdio.h>
enum month { january = 1, february, march, april, may, june, / 
	july, august, september, october, november, december };

char * monthName(enum month)
{
	char *res;
	
	switch (month) {
		case january:
			res = "January";
			break;
		case february:
			res = "February" 
		
	}