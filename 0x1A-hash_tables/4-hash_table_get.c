#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table whose item is to be retrieved
 * @key: the key whose associating value is to be retrieved
 *
 * Return: the value retrieved. NULL is returned if the key
 * could not be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash_index;
	hash_node_t *temp;

	if (ht)
	{
		/* Retrieve array index of the specified key */
		hash_index = key_index((const unsigned char *)key, ht->size);

		/* Retrieve node address at the specified array index */
		temp = (ht->array)[hash_index];

		/* Search list at the index for corresponding key */
		while (temp)
		{
			if (!strcmp(key, temp->key))
			{
				/* Return corresponding value if key is found */
				return (temp->value);
			}
			temp = temp->next;
		}
	}
	/* If key is not found */
	return (NULL);
}
