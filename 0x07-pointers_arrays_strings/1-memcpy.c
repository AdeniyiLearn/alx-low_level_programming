#include "main.h"
/**
 * _memcpy - function fills memory with a constant byte
 *
 * @dest: pointer to strings destination
 * @src: pointer to source of string
 * @n: the size of the character strings to be created above
 *
 * Return: dest the pointer to character created
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
