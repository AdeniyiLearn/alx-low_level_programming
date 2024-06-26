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
 * hash_table_set - function that adds element to the hash table
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with key, can't be an empty string
 *
 * Return: 1 if succeed, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item;
	char *key_one = (char *) key;
	char *value_one = (char *) value;
	unsigned long int index;
	/*const unsigned char *index_key = (const unsigned char *) key;*/
	if (key == NULL)
	{
		printf("key is a empty string or NULL");
		return (0);
	}
	printf("ht_size: %ld", ht->size);

        item =  hash_item(key_one, value_one);

	/* getting the index for the hash table*/
	index = 600;

	/*checking if the table is full*/
	if (index == ht->size && ht->array[index] != NULL)
	{
		printf("Hash Table Array Full\n");
		return (0);
	}
	else if (ht->array[index] != NULL)
	{
		item->next = ht->array[index];
		ht->array[0]->next = item;
		return (0);
	}
	else
	{
		strcpy(ht->array[index]->key, item->key);
		strcpy(ht->array[index]->value, item->value);
		return (1);
	}
}
