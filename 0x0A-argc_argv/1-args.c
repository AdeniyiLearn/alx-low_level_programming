#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: first parameter that takes count
 * @argv: second parameter, an pointer to arguments to main
 *
 * Return: success
 *
 */

int main(int argc, char **argv)
{
	int c;

	c = 0;
	if (argc == 0)
	{
		printf("%d\n", 0);
	}
	else
	{
	while (*argv++)
	{
		c++;
	}
	printf("%d\n", c);
	}

	exit(EXIT_SUCCESS);
}
