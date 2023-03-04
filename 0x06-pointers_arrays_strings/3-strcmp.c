#include "main.h"
/**
 * _strcmp - function compares two strings.
 *
 * @s1: pointer to strings of character source
 * @s2: pointer to strings of the character destination
 *
 *
 * Return: an interger 0 of difference of the parameter if successful
 */


int _strcmp(char *s1, char *s2)
{
	int flag = 0, count;

	for (count = 0; s1[count] != '\0' || s2[count] != '\0'; count++)
	{
		if (s1[count] != s2[count])
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		return (*s1 - *s2);
	}
	return (0);

}

