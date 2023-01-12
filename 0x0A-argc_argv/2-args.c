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
	while (argc--)
	{
		printf("%s\n", *argv++);
	}

	exit(EXIT_SUCCESS);
}
