#include "main.h"

/**
 * _strlen_recursion - prints a string and then a new line
 *
 * @s: pointer to a character parameter
 * Return: result
 *
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (sizeof(*s) + _strlen_recursion(s += 1));
	}
