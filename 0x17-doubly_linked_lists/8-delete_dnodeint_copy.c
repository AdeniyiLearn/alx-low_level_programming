#include "lists.h"

/**
 * delete_dnodeint_at_index - Function deletes the node at index
 * @head: pointer to the head node as a parameter
 * @index: he index of the list where the new node should be deleted.
 * index starts at 0
 * Return: nth node
 *
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *forward, *temp, *deletenode, *previous;
	unsigned int count /*size*/;
/*
	size = 0;*/
	count = 0;

	forward = *head;
	/*while (forward)
	{
		forward = forward->next;
		size++;
	}
	free(forward);
	forward = NULL;
	if (index > size)
	{
		return (-1);
	}*/

	forward = previous = *head;
	while (forward != NULL)
	{
		if (count == index)
		{
			break;
		}
		previous = forward;
		forward = forward->next;
		count++;
	}
	if (index == 0)
	{
		deletenode = forward;
		forward = forward->next;
		free(deletenode);
		forward->prev = NULL;
		deletenode = NULL;
	}
	else
	{
		deletenode = forward;
		temp = forward->next;
		previous->next = temp;
		temp->prev = previous;
		free(deletenode);
		deletenode = NULL;
	}
	return (1);
}
