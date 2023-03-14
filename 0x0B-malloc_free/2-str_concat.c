#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: string parameter
 * @s2: 2nd string parameter
 * Return: return NULL if 0, result if successful
 */
char *str_concat(char *s1, char *s2)
{
	int count, count2, size, size2, size3;
	char *snd, *dummy;

	dummy = "";
	count = 0, count2 = 0, size = 0, size2 = 0, size3 = 0;
	if (s1 == NULL)
	{
		s1 = dummy;
	}
	if (s2 == NULL)
	{
		s2 = dummy;
	}
	size = string_size(s1);
	size2 = string_size(s2);
	size3 = size + size2;
	snd = malloc((size3 + 1) * sizeof(char));
	if (snd == 0)
	{
		return (NULL);
	}
	while (count < size)
	{
		snd[count] = *(s1 + count);
		count++;
	}
	while (count < size3)
	{
		snd[count] = *(s2 + count2);
		count++;
		count2++;
	}
	return (snd);
}
