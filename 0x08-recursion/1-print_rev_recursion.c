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
	if (*s++ != '\0')
	{
		_print_rev_recursion(s);
		_putchar(*s);
	}
	_putchar('\0');
}
