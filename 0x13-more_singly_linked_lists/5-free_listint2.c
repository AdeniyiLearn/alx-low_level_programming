#include "lists.h"
/**
 * free_listint2 - This function frees a list and sets head to NULL
 * @head: takes in the address to a head node that pounts to NULL
 *
 * Return: void
 */


void free_listint2(listint_t *head)
{
	listint_t *temp, *prev;

	temp = prev = head;

	while (temp)
	{
		prev = temp;
		temp = temp->next;
		free(prev);
	}
	free(temp);
	*head = NULL;
}
