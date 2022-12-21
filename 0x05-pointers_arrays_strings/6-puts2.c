#include "main.h"

/**
 * puts2 - function prints other strings and prints a new line after
 * @str: pointer to strings of character
 *
 * Return: Void
 */

void puts2(char *str)
{
	char alt;
	int sec, count = 0;

	count  = _strlen(str);

	for (sec = 0; sec < count; sec++)
	{
		alt = *(str + sec);
		if (sec % 2 == 0)
		{
			_putchar(alt);
		}
	}
	_putchar('\n');
}

/**
 * _strlen - function counts length of string
 * @s: pointer to a character parmeter
 * Return: returns result
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
