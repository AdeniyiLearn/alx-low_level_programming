#include <stdio.h>

/**
 * _islower - function checks if it is lower alphabet
 * @c: integer parameter
 * Return: returns 1 if yes and 0 if no.
 */


int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
