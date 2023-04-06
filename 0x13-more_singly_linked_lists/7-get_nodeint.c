#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of
 * a listint_t linked list
 * @head: takes in the address to a head node
 * @index: nth node to be returned
 *
 * Return: void
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp, *count;
	unsigned int i = 0, n_node = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	count = head;
	while (count->next != NULL)
	{
		count = count->next;
		n_node++;
	}

	if (index > 0 && index < n_node)
	{
		temp = head;

		while (i < index)
		{
			temp = temp->next;
			i++;
		}
		return (temp);
	}
	else
	{
		return (NULL);
	}
}
