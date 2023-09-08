#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds an item to the hash table
 * @ht: a pointet to the hash table
 * @key: the key of te item to be added to the hash table
 * @value: the value of the item to be added to the hash table
 *
 * Return: 1 if successful or 0 if not successful
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash_index;
	hash_node_t *hash_item;

	/* Key can't be an empty string; @size can't be 0 */
	if (ht && ht->size && key && strcmp(key, ""))
	{
		/* Allocate memory for the new hash table node */
		hash_item = malloc(sizeof(hash_node_t));
		if (hash_item == NULL)
		{
			return (0);
		}

		/* Initialize the @key and @value elements of the new node */
		hash_item->key = (char *)key;
		hash_item->value = strdup(value);

		/* Generate an array index for the node key */
		hash_index = key_index((const unsigned char *)key, ht->size);

		/* Node insertion if the array index is empty */
		if ((ht->array)[hash_index] == NULL)
		{
			ht->array[hash_index] = hash_item;
			hash_item->next = NULL;
		}

		/* Node insertion in case of a collision */
		else
		{
			hash_item->next = ht->array[hash_index];
			ht->array[hash_index] = hash_item;
		}

		return (1);
	}
	return (0);
}
