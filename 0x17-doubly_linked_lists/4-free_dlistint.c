#include "lists.h"

/**
 * free_dlistint - Function add node to the end of the list
 * @head: pointer to the head node as a parameter
 * Return:  NOthing
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *current;

	temp = current = head;
	if (head == NULL)
	{
		exit(EXIT_FAILURE);
	}

	while (temp->next != NULL)
	{
		current = temp;
		temp = temp->next;
		free(current);
		current = NULL;
	}
	free(temp);
	temp = head = NULL;
}
