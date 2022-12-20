#include "main.h"
/**
 * print_rev - function prints strings and prints a new line
 * _strlen - function to get string length
 * @s: pointer to strings of character
 *
 * Return: Void
 */

void print_rev(char *s)
{
	int count;

	count = _strlen(s);

	while (*(s + (count - 1)) >= 0)
	{
		_putchar(*(s + (count--)));
	}
	_putchar('\n');
}


int _strlen(char *s)
{
	int count = 0;

	while (*s++)
	{
		count++;
	}
	return (count);
}
