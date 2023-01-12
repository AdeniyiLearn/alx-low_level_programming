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
		exit(EXIT_FAILURE);
	}
	while (*argv++)
	{
		c++;
	}
	printf("%d\n", c);
	exit(EXIT_SUCCESS);
}
