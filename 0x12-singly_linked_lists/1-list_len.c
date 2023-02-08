#include "lists.h"

/**
 * list_len - function returns number of elements
 * @h: const parameter of type list
 * Return: 0 and nil if NULL and number of nodes if successful
 *
 */

size_t list_len(const list_t *h)
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

		count++;
		mover = mover->next;
	}
	return (count);
}
