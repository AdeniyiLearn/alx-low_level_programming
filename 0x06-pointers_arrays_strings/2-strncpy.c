#include "main.h"
/**
 * _strncpy - function appends strings from n bytes of source to destinaton
 *
 * @src: pointer to strings of character source
 * @dest: pointer to strings of the character destination
 * @n: total bytes of source to be appended
 *
 * Return: pointer to character of the destination
 */


char *_strncpy(char *dest, char *src, int n)
{
	int a, count;


	for (a = 0; a <= n; a++)
	{
		if (_strlen(dest) >= _strlen(src))
		{
		*(dest + a) = *(src + a);
		}
		else if (_strlen(dest) < _strlen(src))
		{
			for (count = 0; count < n; count++)
			{
				*(dest + a) = *(src + a);
			}
		}
		else
		{
			exit(1);
		}
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
