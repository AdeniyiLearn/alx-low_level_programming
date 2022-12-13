#include <stdio.h>

/**
 * print_alphabet - function that prints the alphabet, in lowercase
 *
 * putchar: writes individual character to standard output one at a time
 *
 * Return: return 0 (successful)
 */

void print_alphabet(void)
{
	int count;

	for (count = 97; count < 123; count++)
	{
		putchar(count);
	}

	putchar('\n');
}
