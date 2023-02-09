#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list
 * @head: double pointer parameter of type list
 * @str: const string parameter
 * Return: NULL if failed and address of new element if successful
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *mover = malloc(sizeof(list_t));

	if (str == NULL)
	{
		return (NULL);
	}

	else if (head != NULL)
	{
		mover->str = strdup(str);
		mover->len = strlen(str);
		mover->next = *head;
		*head = mover;

		return (*head);
	}

}
