#include "function_pointers.h"

/**
 * array_iterator - prints a name
 *
 * @array: pointer to integer array given
 *
 * @size:  size of the array
 *
 * @action: pointer to function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (size == '\0' || size <= 0 || action == NULL || array == NULL)
	{
		exit(EXIT_FAILURE);
	}

	for (i = 0; i < size; i++)
	{
		if (*(array + i) == '\0')
		{
			exit(EXIT_FAILURE);
		}
		action(*(array + i));
	}
}
