#include "lists.h"
/**
 * listint_len - print all the elements of a list
 * @h: takes the head node of any list
 * Return: the number of elements in a list
 */

size_t listint_len(const listint_t *h)
{
	int node_num = 0;

	if (h == NULL)
	{
		exit(1);
	}

	while (h != NULL && h->n != '\0')
	{
		node_num++;
		h = h->next;
	}

	return (node_num);
}
