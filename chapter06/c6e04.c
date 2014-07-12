/* Simple printing calculator. Accpts inputs in the form of:
 * number operator
 * The following operators are recogniged:
 * + - * / S E
 * The S operator set the accumulator to the typed-in number.
 * The E operator tell the program that execution is to end.
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool end = false;
	float accumu = 0;
	float number;
	char operator;

	printf("Simple printing calculator. Accepts inputs in the form of:\n");
	printf(": number operator\n");
	printf("Where an operator is any of the following:\n");
	printf("+\t-\t*\tS\tE\n");
	printf("The S operator sets the accumulator\n");
	printf("The E operator ends the calculation\n\n");
	
	printf("Begin Calculations\n");
	do
	{
		printf(": ");
		scanf("%f %c",&number, &operator);
		switch (operator)
		{
			case '+':
				accumu += number;
				break;

			case '-':
				accumu -= number;
				break;

			case '*':
			case 'x':
			case 'X':
				accumu *= number;
				break;

			case '/':
			case '\\':
				if (number != 0)
				{
					accumu = accumu / number;
				}
				else
					printf("Division by 0 not allowed\n");
				break;

			case 'S':
			case 's':
				accumu = number;
				break;

			case 'e':
			case 'E':
				end = true;
				break;

			default:
				printf("Invalid operator %c\n", operator);
				break;

			}
		printf("%g\n", accumu);

	}while(end == false);
	printf("End of calculations\n\n");

	return 0;
}
