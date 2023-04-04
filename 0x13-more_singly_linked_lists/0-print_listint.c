#include "lists.h"
/**
 * print_listint - print all the elements of a list
 * @h: takes the head node of any list
 * Return: the number of nodes in a list
 */

size_t print_listint(const listint_t *h)
{
	int node_num = 0;

	if (h == NULL)
	{
		return (-1);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_num++;
		h = h->next;
	}

	return (node_num);
}
