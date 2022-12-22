#include "main.h"
/**
 * _strcat - function copies strings from source to destinaton
 *
 * @src: pointer to strings of character source
 * @dest: pointer to strings of the character destination
 *
 * Return: pointer to character of the destination
 */


char *_strcat(char *dest, char *src)
{
	int dest_lent, src_lent, count, begin;

	dest_lent = _strlen(dest);
	src_lent = _strlen(src);
	begin = dest_lent - 1;

	for (count = 0; count <= src_lent; count++)
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
