#include "main.h"

/**
 * _print_rev_recursion - prints a string and then a new line
 *
 * @s: pointer to a character parameter
 * Return: void
 *
 */

void _print_rev_recursion(char *s)
{
	char c;

	c = *s++;
	if (c == '\0')
	{
		_putchar('\n');
	}
	else
	{
	_print_rev_recursion(s);
	_putchar(*s);
	}
}
