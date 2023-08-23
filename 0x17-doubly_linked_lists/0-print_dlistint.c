#include "lists.h"

/**
 * print_dlistint - Function prints all the elements of a dlistint_l list
 * @h: pointer to the head node as a parameter
 * Return:  the number of nodes
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t n_node;

	temp = h;
	n_node = 0;

	if (h == NULL)
		exit(1);
	while (temp != NULL)
	{
		n_node += 1;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (n_node);
}
