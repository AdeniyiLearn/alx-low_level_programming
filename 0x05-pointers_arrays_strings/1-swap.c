#include <stdio.h>
#include "main.h"
/**
 * swap_int - function updates the value
 * @a: integer parameter 1
 * @b: integer parameter 2
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int *c;

	*c = *a;
	*a = *b;
	*b = *c;
}

