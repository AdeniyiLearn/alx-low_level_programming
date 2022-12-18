ginclude <stdio.h>
#include "main.h"
/**
 * _isupper - function checks if it is an uppercase alphabet
 * @c: integer parameter
 * Return: returns Void
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
