#include "main.h"

/**
 * _puts_recursion - prints a string and then a new line
 *
 * @s: pointer to a character parameter
 * Return: void
 *
 */

void _puts_recursion(char *s)
{
	char c;

	c = *s++;
	if (c == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(c);
		_puts_recursion(s);
	}
}
