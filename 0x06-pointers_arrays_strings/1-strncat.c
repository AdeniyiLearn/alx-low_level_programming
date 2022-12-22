#include "main.h"
/**
 * _strncat - function appends strings from n bytes of source to destinaton
 *
 * @src: pointer to strings of character source
 * @dest: pointer to strings of the character destination
 * @n: total bytes of source to be appended
 *
 * Return: pointer to character of the destination
 */


char *_strncat(char *dest, char *src, int n)
{
	int dest_lent, count, begin;

	dest_lent = _strlen(dest);
	begin = dest_lent;

	for (count = 0; count < n; count++)
	{
		*(dest + (begin) + count) = *(src + count);
	}
	return (dest);
}


/**
 * _strlen - function returns length
 *
 * @s: pounter to character
 *
 * Return: result
 *
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
