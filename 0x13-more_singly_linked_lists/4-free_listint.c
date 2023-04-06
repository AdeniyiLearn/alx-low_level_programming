#include "lists.h"
/**
 * free_listint - This function frees a list
 * @head: takes in the address to a head node that pounts to NULL
 *
 * Return: void
 */


void free_listint(listint_t *head)
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
}
