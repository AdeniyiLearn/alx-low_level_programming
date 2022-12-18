#include <stdio.h>
#include "main.h"
/**
 * _isdigit - function checks if it is an uppercase alphabet
 * @c: integer parameter
 * Return: returns Void
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
