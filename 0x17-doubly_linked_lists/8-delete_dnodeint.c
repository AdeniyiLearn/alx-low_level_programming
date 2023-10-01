#include "lists.h"
/**
 * delete_dnodeint_at_index - Function deletes the node at index
 * @head: pointer to the head node as a parameter
 * @index: he index of the list where the new node should be deleted.
 * index starts at 0
 * Return: nth node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *forward, *temp, *deletenode, *previous;
	unsigned int count, size;

	size = 0;
	count = 0;
	forward = temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
		size++;
	}
	if (index > size)
		return (-1);
	else if (index == 0)
	{
		forward = forward->next;
		free(forward->prev);
		forward->prev = NULL;
	}
	while (forward->next != NULL)
	{
		if (index == count)
		{
			deletenode = previous;
			previous->next = forward;
			forward->prev = previous;
			free(deletenode);
			deletenode = NULL;
			break;
		}
		previous = forward;
		forward = forward->next;
		count++;
	}
	return (1);
}
