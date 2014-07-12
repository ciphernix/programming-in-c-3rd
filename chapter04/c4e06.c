#include <stdio.h>

int main(void)
{
	float x = 2.55;
	double answer;

	answer = (3 * (x*x*x)) - (5 * (x*x)) + 6;

	printf("Answer is %g\n",answer);

	return 0;
}
