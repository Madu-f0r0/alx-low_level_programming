#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>


int check_for_key(const char *key, const char *value, hash_node_t *hash_item);
hash_node_t *create_new_item(const char *key, const char *value);

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
	hash_node_t *hash_item, *temp;

	/* Key can't be an empty string; @size can't be 0 */
	if (ht && ht->size && key && strcmp(key, ""))
	{
		/* Generate an array index for the node key */
		hash_index = key_index((const unsigned char *)key, ht->size);

		temp = (ht->array)[hash_index];

		/* Check if the specified key already exists in the table */
		if (check_for_key(key, value, temp))
			return (1);

		/* Create a new node and initialize @key and @value */
		hash_item = create_new_item(key, value);
		if (!hash_item)
			return (0);

		/* Node insertion if the array index is empty */
		if ((ht->array)[hash_index] == NULL)
		{
			(ht->array)[hash_index] = hash_item;
			hash_item->next = NULL;
		}

		/* Node insertion in case of a collision */
		else
		{
			hash_item->next = (ht->array)[hash_index];
			(ht->array)[hash_index] = hash_item;
		}
		return (1);
	}
	return (0);
}

/**
 * check_for_key - checks if a specified key exists at a given index
 * @key: the to be searched for
 * @value: the value to replace the former value at the key if found
 * @hash_item: the list at the given index where the key is to be searched for
 *
 * Return: 1 if the key is found; 0 if not found
 */
int check_for_key(const char *key, const char *value, hash_node_t *hash_item)
{
	hash_node_t *temp = hash_item;

	while (temp)
	{
		if (!strcmp(temp->key, (char *)key))
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	return (0);
}

/**
 * create_new_item - creates a new hash table node
 * @key: the key to be stored in the new node
 * @value: the coressponding value to be stored in the new node
 *
 * Return: a pointer to the newly created node; NULL if the node is not created
 */
hash_node_t *create_new_item(const char *key, const char *value)
{
	hash_node_t *hash_item;

	/* Allocate memory for the new hash table node */
	hash_item = malloc(sizeof(hash_node_t));
	if (hash_item == NULL)
	{
		return (NULL);
	}

	/* Initialize the @key and @value elements of the new node */
	hash_item->key = (char *)key;
	hash_item->value = strdup(value);

	return (hash_item);
}
