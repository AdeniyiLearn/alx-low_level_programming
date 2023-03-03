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
	int count;

	if (n < 0)
	{
		n = n * -1;
	}
	if (dest == NULL || src == NULL)
	{
		return (dest);
	}
	for (count = 0; count < n && *src != '\0'; count++)
	{
		*(dest + count) = *(src + count);
	}
	return (dest);
}
