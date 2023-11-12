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
	dlistint_t *temp, *prev, *newnode, *start;
	unsigned int count;

	newnode = NULL;
	count = 0;
	start = *h;
	temp = *h;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	while (temp != NULL)
	{
		if (idx == 0)
		{
			newnode->next = temp;
			temp = newnode;
			return (temp);

		}
		if (count == idx)
		{
			prev->next = newnode;
			newnode->next = temp;
			return (start);
		}
		count += 1;
		prev = temp;
		temp = temp->next;
	}
	return (NULL);
}


