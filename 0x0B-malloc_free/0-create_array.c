#include "main.h"

/**
 * create_array - creates an array of chars & initialize
 *
 * @size: integer parameter
 * @c: character parameter
 *
 * Return: return NULL if 0, result if successful
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int co;
	char *snd;

	co = 0;
	snd = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	while (co < size)
	{
		snd[co] = c;
		printf("%c", snd[co]);
	}
	return (snd);
}
