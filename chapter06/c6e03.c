/* Accepts two numbers from the user and divides the first number
 * by the second to three decimal place accuracy
 */

#include <stdio.h>

int main(void)
{
	int num1, num2;
	float answer;

	printf("Enter two number seperated by space\n The first number will be divided by the second\n");
	printf("Example: 10 5\n\tWill divide 10 by 5\nEnter Numbers: ");
	scanf("%i %i", &num1, &num2);
	if (num2 == 0)
	{
		printf("Error: Division by 0\n");
		return -1;
	}else{
		answer = (float) num1 / num2;
		printf("%i divided by %i is %.3f\n",num1, num2, answer);
	}
	return 0;
}
