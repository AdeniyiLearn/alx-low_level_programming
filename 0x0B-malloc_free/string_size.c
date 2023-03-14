#include "main.h"

/**
 * string_size - function that returns length of a string
 * @s: parameter string pointer
 * Return: length of string if successful
 *
 */

int string_size(char *s)
{
	int i, size;

	i = 0;
	size = 0;
	while (*(s + 1) != '\0')
	{
		i++;
		size++;
	}
	return (size);
}
