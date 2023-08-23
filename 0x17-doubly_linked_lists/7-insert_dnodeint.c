#include "lists.h"

/**
 * insert_dnodeint_at_index - Function inserts a new node at a given position.
 * @h: pointer to the head node as a parameter
 * @idx: he index of the list where the new node should be added.
 * ndex starts at 0
 *
 * @n: integer data to be inserted
 *
 * Return: nth node
 *
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *forward, *node_n, *previous;
	unsigned int count;

	count = 0;
	node_n = malloc(sizeof(dlistint_t));
	if (node_n == NULL)
	{
		return (NULL);
	}
	node_n->n = n;
	node_n->prev = NULL;
	node_n->next = NULL;

	if (count > idx)
	{
		return (0);
	}
	forward = previous = *h;
	while (count < idx)
	{
		if (forward == NULL)
		{
			return (NULL);
		}
		previous = forward;
		forward = forward->next;
		count++;
	}
	previous->next = node_n;
	node_n->next = forward;
	node_n->prev = previous;

	return (node_n);
}
