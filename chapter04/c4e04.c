#include <stdio.h>

int main(void)
{
	int F = 27;
	float C;

	C = (F - 32) / 1.8;

	printf("27 degrees Fahrenheit is %g Celsius\n",C);

	return 0;
}

