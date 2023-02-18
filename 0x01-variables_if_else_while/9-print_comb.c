#include <stdio.h>

/**
 * main - the program's main function
 *
 * Return: return 0 (successful)
 */

int main(void)
{
	int count, i, last;

	last = 57;
	i = 44;

	for (count = 48; count < 57; count++)
	{
		putchar(count);
		putchar(i);
		putchar(' ');
	}
	putchar(last);
	return (0);
}
