#include <stdio.h>
#include "main.h"

/**
 * _abs - function checks if it is an alphabet
 * @n: integer parameter
 * Return: returns 0 if successful
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}

	else
		return (n);
}
