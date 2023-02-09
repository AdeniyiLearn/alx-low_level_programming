#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list
 * @head: double pointer parameter of type list
 * @str: const string parameter
 * Return: NULL if failed and address of last element if successful
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	list_t *first_node, *last_node;
	char *takestr;

	if (str == NULL || *head != NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	takestr = strdup(str);
	first_node = malloc(sizeof(list_t));

	first_node->str = takestr;
	first_node->len = len;
	first_node->next = NULL;

	if (*head == NULL)
	{
		*head = first_node;
	}
	else
	{
		last_node = *head;

		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = first_node;
	}
	return (first_node);
}
