#include "main.h"
/**
 * alloc_grid - concatenates two strings
 * @width: first parameter
 * @height: 2nd string parameter
 * Return: return NULL if 0, result if successful
 */
int **alloc_grid(int width, int height)
{
	int h_index;
	int **p;

	p = calloc(height, sizeof(int));
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (h_index = 0; h_index < height; h_index++)
	{
		p[h_index] = calloc(width, sizeof(int));
	}
	return (p);
}
