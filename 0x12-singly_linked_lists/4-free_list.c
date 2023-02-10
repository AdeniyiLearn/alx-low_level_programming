#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: pointer parameter of type list
 *
 * Return: void
 *
 */

void free_list(list_t *head)
{
	list_t *temp_node;


	temp_node = head;
	while (temp_node != NULL)
	{
		temp_node = temp_node->next;
		free(head);
		head = temp_node;
	}
	free(temp_node);

}
