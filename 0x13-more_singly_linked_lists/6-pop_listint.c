#include "lists.h"
/**
 * pop_listint - This function deletes the head
 * @head: the pointer to the start of the list
 *
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
	int node_data;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		node_data = *head->n;

		temp = *head;
		*head = *head->next;
		free(temp);
	}

	return (node_data);
}
