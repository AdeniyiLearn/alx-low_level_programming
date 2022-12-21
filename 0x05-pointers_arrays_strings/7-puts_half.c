#include "main.h"

/**
 * puts_half - function prints other strings and prints a new line after
 * @str: pointer to strings of character
 *
 * Return: Void
 */

void puts_half(char *str)
{
	char alt;
	int sec, half, count = 0;

	count  = _strlen(str);
	if (count % 2 == 1)
	{
		half = ((count - 1) / 2) + 1;
	}
	else
	{
		half = count / 2;
	}

	for (sec = half; sec < count; sec++)
	{
		alt = *(str + sec);
		_putchar(alt);
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
