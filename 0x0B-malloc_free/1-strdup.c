#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter.
 *
 * @str: string parameter
 *
 * Return: return NULL if 0, result if successful
 *
 */

char *_strdup(char *str)
{
	int i, count, size;
	char *snd;

	count = 0;
	i = 0;
	size = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*(str + i) != '\0')
	{
		i++;
		size++;
	}

	snd = (char*)malloc((size + 1) * sizeof(char));

	while (count <= size + 1)
	{
		snd[count] = *(str + count);
		count++;
	}
	return (snd);

}
