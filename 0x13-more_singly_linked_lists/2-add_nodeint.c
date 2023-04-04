#include "lists.h"
/**
 * add_nodeint - This function adds a new node at the beginnig of a list
 * @head: takes in the address to a head node that pounts to NULL
 * @n: integer element value for each nodes
 * Return: the address of the new element added
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);

}
