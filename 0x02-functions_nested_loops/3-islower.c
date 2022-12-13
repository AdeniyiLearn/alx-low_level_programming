#include <stdio.h>

/**
 * int _islower(int c) - function checks if it is lower alphabet
 * Return: returns 1 if yes and 0 if no.
 */


int _islower(int c)
{
	if ( c >= 97 && c <= 122)
	{
		return (1);
	}

	else
	{
		return (0);
	}
 }
