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

