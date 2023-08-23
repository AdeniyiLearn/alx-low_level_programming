#include "lists.h"

/**
 * add_dnodeint_end - Function add node to the end of the list
 * @head: pointer to the head node as a parameter
 * @n: data to be entered to each new node
 * Return:  pointer to first node
 *
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node_new;
	dlistint_t *current;
	dlistint_t *temp;

	node_new = malloc(sizeof(dlistint_t));

	if (node_new == NULL)
	{
		return (NULL);
	}

	node_new->n = n;
	node_new->prev = NULL;
	node_new->next = NULL;

	if (*head == NULL)
	{
		*head = node_new;
	}
	else
	{
		temp = *head;
		current = node_new;
		current->n = n;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = current;
		current->prev = temp;

	}
	return (*head);
}
