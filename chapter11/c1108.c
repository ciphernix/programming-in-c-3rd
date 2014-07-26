/*
 * Chapter 11 Exercisw 8:
 * Write a function called sort 3 to sort three intergers into ascending order.
 * Implement the function without using arrays.
 *
 */

#include <stdio.h>

void intSort(int *x, int *y, int *z)
{
	int temp;

	if (*x > *y)
	{
		temp = *x;
		*x = *y;
		*y = temp;
	}

	if (*y > *z)
	{
		temp = *y;
		*y = *z;
		*z = temp;
	}

	if (*x > *z)
	{
		temp = *x;
		*x = *z;
		*z = temp;
	}
}

int main(void)
{
	int x,y,z;

	printf("Enter three ints to sort: ");
	scanf("%i %i %i", &x, &y, &z);

	intSort(&x, &y, &z);

	printf("%i %i %i\n\n", x, y, z);

	return 0;
}
