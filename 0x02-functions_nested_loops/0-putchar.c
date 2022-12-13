#include <stdio.h>
#include "mainh"

/**
 * main - the program's main function
 *
 * putchar: writes individual character to standard output one at a time
 *
 * Return: return 0 (successful)
 */

int main(void)
{
	char to_print[] = "_putchar";
	int count;

	for (count = 0; count < 8; count++)
	{
		putchar(to_print[count]);
	}

	putchar('\n');
	return (0);
}
