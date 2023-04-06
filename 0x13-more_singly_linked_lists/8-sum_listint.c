#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data (n) of
 * a listint_t linked list
 *
 * @head: takes in the address to a head node
 *
 *
 * Return: sum of all the data if successful
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int listDataSum = 0;

	if (head == NULL)
	{
		return (0);
	}

	temp = head;

	while (temp->next)
	{
		temp = temp->next;
		listDataSum += temp->n;
	}
	return (listDataSum);
}
