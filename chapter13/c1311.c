/*
 * Chapter 13 Exercise 11:
 * Test out the system library functions that are equivalent to the macros you
 * developed in exercises 6,7 and 8. The library functions are called isupper,
 * isalpha and isdigit. You need to include the system header file <ctype.h>.
 */

#include<stdio.h>
#include<ctype.h>
#include"chapter13.h"

int main(void)
{
	char c;
	printf("Enter char: ");
	scanf("%c", &c);

	if (islower(c) && IS_LOWER_CASE(c))
		printf("islower is similar to IS_LOWER_CASE.\n");
	else if ((islower(c) && !IS_LOWER_CASE(c) ) || (IS_LOWER_CASE(c) &&
				!islower(c) ) )
		printf("There is an issue with islower or IS_LOWER_CASE\n");

	if (isupper(c) && IS_UPPER_CASE(c))
		printf("isupper is similar to IS_UPPER_CASE.\n");
	else if ((isupper(c) && !IS_UPPER_CASE(c) ) || (IS_UPPER_CASE(c) &&
				!isupper(c) ) )
		printf("There is an issue with isupper or IS_UPPER_CASE\n");

	if (isalpha(c) && IS_ALPHABETIC(c))
		printf("isalpha is similar to IS_ALPHABETIC.\n");
	else if ((isalpha(c) && !IS_ALPHABETIC(c) ) || (IS_ALPHABETIC(c) &&
				!isalpha(c) ) )
		printf("There is an issue with isalpha or IS_ALPHABETIC\n");
	
	if (isdigit(c) && IS_DIGIT(c))
		printf("isdigit is similar to IS_DIGIT.\n");
	else if ((isdigit(c) && !IS_DIGIT(c) ) || (IS_DIGIT(c) &&
				!isdigit(c) ) )
		printf("There is an issue with isdigit or IS_DIGIT\n");
	return 0;
}
