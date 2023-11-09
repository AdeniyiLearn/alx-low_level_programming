#include "lists.h"

/**
 * dlistint_len - Function returns the number of elements
 * @h: pointer to the head node as a parameter
 * Return:  the number of nodes
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n_node;

	n_node = 0;
	while (h != NULL)
	{
		n_node += 1;
		h = h->next;
	}
	return (n_node);
}
