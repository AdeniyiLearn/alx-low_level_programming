#include "lists.h"
/**
 * add_nodeint_end - This function adds a new node at the end of a list
 * @head: takes in the address to a head node that pounts to NULL
 * @n: integer element value for each nodes
 * Return: the address of the last element added
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *l_node, *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
	}

	else
	{
		l_node = *head;
		while(l_node->next != NULL)
		{
			l_node = l_node->next;
		}
		l_node->next = temp;
	}
	return (*head);
}
