#include "lists.h"

/**
 * print_dlistint - Function prints all the elements of a dlistint_l list
 * @h: pointer to the head node as a parameter
 * Return:  the number of nodes
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n_node;

	n_node = 0;

	while (h != NULL)
	{
		n_node += 1;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n_node);
}
