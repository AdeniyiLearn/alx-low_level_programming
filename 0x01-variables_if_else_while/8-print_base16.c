#include <stdio.h>

/**
 * main - the program's main function
 *
 * putchar: writes individual character to standard output one at a time
 *
 * Return: return 0 (successful)
 */

int main(void)
{
	int count, i;

	for (count = 48; count < 58; count++)
	{
		putchar(count);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
