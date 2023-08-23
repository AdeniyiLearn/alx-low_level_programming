#include "lists.h"

/**
 * dlistint_len - Function returns the number of elements
 * @h: pointer to the head node as a parameter
 * Return:  the number of nodes
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t n_node;

	temp = h;
	n_node = 0;

	if (h == NULL || h == 0)
	{
		dprintf(2, "Error: can't malloc\n");
		return (EXIT_FAILURE);
	}
	while (temp != NULL)
	{
		n_node += 1;
		temp = temp->next;
	}
	return (n_node);
}
