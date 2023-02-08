#include "lists.h"

/**
 * print_list - function that prints all element of a list
 * @h: const parameter of type list
 * Return: 0 and nil if NULL and number of nodes if successful
 *
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *mover;

	if (h == NULL)
	{
		return (0);
	}
	mover = h;
	while (mover != NULL)
	{
		if (mover->str == NULL)
		{
			printf("[%d] (%s)\n", 0, "nil");
			count++;
		}
		else
		{

			count++;
			printf("[%u] %s\n", mover->len, mover->str);
		}
		mover = mover->next;
	}
	return (count);
}
