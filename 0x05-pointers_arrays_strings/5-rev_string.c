#include "main.h"
/**
 * rev_string - function reverse strings
 *
 * @s: pointer to strings of character
 *
 * Return: Void
 */

void rev_string(char *s)
{
	int a, b, c, count;
	char *rev;


	count = _strlen(s);
	c = count - 1;
	rev = (char*)malloc(sizeof(char)*count);

	for (a = 0, b = c; b >= 0 && a < c; a++, b--)
	{
		rev[a] = *(s + b);
	}
	for (a = 0; a < count; a++)
	{
		*(s + a) = *(rev + a);
	}
	*(s + a + 1) = '\0';
}


/**
 * _strlen - function returns string length
 * @s: pointer to a character parameter
 * Return: returns result
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
