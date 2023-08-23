#include "lists.h"

/**
 * get_dnodeint_at_index - Function returns nth node of a list
 * @head: pointer to the head node as a parameter
 * @index: the index of the node, starting from 0
 * Return: nth node
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count;

	count = 0;
	temp = head;
	while (temp != NULL)
	{
		if (count == index)
		{
			break;
		}
		count += 1;
		temp = temp->next;
	}
	if (temp == NULL)
	{
		return (NULL);
	}
	return (temp);
}
