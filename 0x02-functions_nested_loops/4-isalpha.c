#include <stdio.h>

/**
 * _isalpha - function checks if it is an alphabet
 * @c: integer parameter
 * Return: returns 1 if yes and 0 if no.
 */


int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 98 && c <= 122))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
