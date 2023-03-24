#include "3-calc.h"

/**
 * main - function main
 *
 * @argc: command line argument count
 * @argv: command line argument list
 * Return: integer to the system
 *
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *operator;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		puts("Error");
		exit(100);
	}
	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		puts("Error");
		exit(99);
	}
	result = (*get_op_func(argv[2]))(num1, num2);

	printf("%d\n", result);

	return (0);
}
