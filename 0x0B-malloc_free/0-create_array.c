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
	unsigned int counter;
	char *snd;

	counter = 0;
	snd = malloc(sizeof(char) * size);

	if (snd == 0 || size == 0)
	{
		return (NULL);
	}
	while (counter <= size)
	{
		snd[counter] = c;
		counter++;
	}
	return (snd);
}
