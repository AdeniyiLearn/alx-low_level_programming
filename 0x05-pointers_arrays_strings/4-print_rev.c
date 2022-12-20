#include "main.h"
/**
 * print_rev - function prints strings and prints a new line
 *
 * @s: pointer to strings of character
 *
 * Return: Void
 */


void print_rev(char *s)
{
	int count;
	char try;

	for (count = _strlen(s); count >= 0;)
	{
		try = *(s + (count--));
		if (try != '\0')
		{
			_putchar(try);
		}
	}
	_putchar('\n');
}


/**
 * _strlen - function returns length
 *
 * @s: pounter to character
 *
 * Return: result
 *
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s++)
	{
		count++;
	}
	return (count);
}
