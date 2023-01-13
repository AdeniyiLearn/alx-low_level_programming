#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: unsigned int parameter
 *
 * Return: void or typecasted data type
 */

void *malloc_checked(unsigned int b)
{
	int *snd;

	if (b == '\0')
	{
		exit(98);
	}
	snd = malloc(b);
	return(snd);
}
