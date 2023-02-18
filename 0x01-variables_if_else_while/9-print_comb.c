#include <stdio.h>

/**
 * main - the program's main function
 *
 * Return: return 0 (successful)
 */

int main(void)
{
	int count, i;

	i = 44;

	for (count = 48; count <= 57; count++)
	{
		putchar(count);
		if (count < 57)
		{
			putchar(i);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
