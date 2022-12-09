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
	int count;

	for (count = 97; count < 123; count++)
	{
		if (count != 101 && count != 133)
		{
			putchar(count);
		}
	}

	putchar('\n');
	return (0);
}
