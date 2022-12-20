#include <stdio.h>
#include "main.h"
/**
 * _strlen - function returns length of strings
 * @s: pointer character
 *
 * Return: Void
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

#include "main.h"
/**
 * print_rev - function prints strings and prints a new line aftre
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
		putchar(*(s + (count--)));
	}
}
