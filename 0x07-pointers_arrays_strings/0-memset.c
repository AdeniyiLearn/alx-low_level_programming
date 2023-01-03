#include "main.h"
/**
 * _memset - function fills memory with a constant byte
 *
 * @s: pointer to strings of character
 * @b: character variable to be set into the character strings created above
 * @n: the size of the character strings to be created above
 *
 * Return: s the pointer to character created
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
