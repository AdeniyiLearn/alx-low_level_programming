#include "lists.h"

/**
 * add_dnodeint - Function add node to the beginning of the list
 * @head: pointer to the head node as a parameter
 * @n: data to be entered to each new node
 * Return:  pointer to first node
 *
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node_new;
	dlistint_t *current;

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
		current = node_new;
		current->n = n;

		(*head)->prev = current;
		current->next = *head;
		*head = current;


	}
	return (*head);
}
