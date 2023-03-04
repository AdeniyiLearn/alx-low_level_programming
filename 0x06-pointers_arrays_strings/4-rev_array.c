#include "main.h"
/**
 * reverse_array - function reverses the content of an array of integers
 *
 * @a: the pointer the integer array
 * @n: number of the elements of the array
 *
 *
 * Return: void
 */


void reverse_array(int *a, int n)
{
	int count = 0, hold, *b;

	hold = n;
	b = malloc(sizeof(int) * n);
	while (count < hold)
	{
		*(b + count) = *(a + (n - 1));
		count++;
		n--;
	}
	for (count = 0; count < hold; count++)
	{
		*(a + count) = *(b + count);
	}
	free(b);
}

