#include <stdio.h>

/**
 * main - program's main function
 *
 * putchar: function prints a character at a time
 * Return: return 0 when successful
 */

int main(void)
{
	int counter;

	for (counter = 97; counter < 123; counter++)
	{
		putchar(counter);
	}
	putchar('\n');

	return (0);
}
