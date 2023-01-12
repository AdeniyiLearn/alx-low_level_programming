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

	if (argc <= 1)
	{
		puts("Error");
		return (1);
	}

	else
	{
		c = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", (c));
	}

	exit(EXIT_SUCCESS);
}
