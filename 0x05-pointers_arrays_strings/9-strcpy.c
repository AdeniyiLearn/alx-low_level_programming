#include "main.h"
/**
 * _strcpy - function copies strings from source to destinaton
 *
 * @src: pointer to strings of character source
 * @dest: pointer to strings of the character destination
 *
 * Return: pointer to character of the destination
 */


char *_strcpy(char *dest, char *src)
{
	int count, a;

	count = _strlen(src);
	for (a = 0; a <= count; a++)
	{
		*(dest + a) = *(src + a);
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
