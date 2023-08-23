#include "lists.h"

/**
 * sum_dlistint - Function sum all list data
 * @head: pointer to the head node as a parameter
 *
 * Return: nth node
 *
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	unsigned int count;

	count = 0;
	temp = head;
	while (temp != NULL)
	{
		count += temp->n;
		temp = temp->next;
	}
	return (count);
}
