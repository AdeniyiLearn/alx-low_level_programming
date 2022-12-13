#include <stdio.h>

/**
 * print_alphabet_x10 - function that prints the alphabet, in lowercase
 *
 * putchar: writes individual character to standard output one at a time
 *
 * Return: return 0 (successful)
 */

void print_alphabet_x10(void)
{
	int count;
	int count1;

	for (count1 = 0; count1 < 10; count1++)
	{
		for (count = 97; count < 123; count++)
		{
			putchar(count);
		}

		putchar('\n');
	}
}
