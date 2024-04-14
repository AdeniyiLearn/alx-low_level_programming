#include "hash_tables.h"

/**
 * hash_table_create - Function creates a hash table.
 * @size: size of the array
 *
 * Return:  pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	int i;
	hash_table_t *table;

	table = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (table == NULL)
	{
		printf("table malloc failed");
		return (NULL);
	}
	table->size = size;
	table->array = (hash_node_t **) calloc(table->size, sizeof(hash_node_t *));

	if (table->array == NULL)
	{
		printf("table->array calloc failed");
		return (NULL);
	}

	for (i = 0; i < (int) table->size; i++)
		table->array[i] = NULL;

	return (table);
}
