#include "main.h"
/**
 * _puts - function prints strings and prints a new line aftre
 * @str: pointer to strings of character
 *
 * Return: Void
 */

void _puts(char *str)
{
	char try;

	do {
		try = *str;
		_putchar(try);
	} while (*str++ && *str != '\0');
	_putchar('\n');
}
