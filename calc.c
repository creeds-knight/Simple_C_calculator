#include <stdio.h>
/**
 * main - This fuction takes two integers and applies a function them
 * @num1: input
 * @num2: input
 * @a: input
 * Return: 0 (Successful)
 */
int main(void)
{
	float num1;
	float num2;
	char a;
	float result;

	printf("Please fill in the numbers and the operation to be applied\n");
	scanf("%f %c %f", &num1, &a, &num2);
	switch(a)
	{
		case '+':
			result = num1 + num2;
			printf("The sum of the numbers is :%f", result);
			break;
		case '-':
			result = num1 - num2;
			printf("The difference between the numbers is : %f", result);
			break;
		case '/':
			result = num1 / num2;
			printf("The result of the division is : %f", result);
			break;
		case '*':
			result = num1 * num2;
			printf("The modulus of %f and %f is :%f", num1, num2, result);
			break;
		default:
			printf("You can only use two numbers for this project");
	}
	return (0);
}
