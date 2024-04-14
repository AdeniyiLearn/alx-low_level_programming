#include "hash_tables.h"

/**
 * hash_item - Function creates a hash item
 * @key: The key, string
 * @value: The value corresponding to a key
 * Return: Return a pointer to the hash item created
 *
 */

hash_node_t *hash_item(char *key, char *value)
{
	hash_node_t *item = (hash_node_t *) malloc(sizeof(hash_node_t));

	item->key = (char *) malloc(strlen(key) + 1);
	item->value = (char *) malloc(strlen(value) + 1);
	strcpy(item->key, key);
	strcpy(item->value, value);
	item->next = NULL;

	return (item);
}

/**
 * hash_table_create - Function creates a hash table.
 * @size: size of the array
 *
 * Return:  pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = (hash_table_t *) malloc(sizeof(hash_table_t));

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
	return (table);
}
