#include "function_pointers.h"

/**
 * int_index - prints a name
 *
 * @array: pointer to integer array given
 *
 * @size:  size of the array
 *
 * @cmp: pointer to function
 *
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return;
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)) != 0)
		{
			return (i);
		}
		else
		{
			continue;
		}
	}
	exit(EXIT_SUCCESS);
}
