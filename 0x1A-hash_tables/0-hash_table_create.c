#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table of specified size
 * @size: the size of the hash table to be created
 *
 * Return: a pointer to the new hash table created.
 * NULL is returned if an error occurs
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	/* Only create hash table if @size > 0 */
	if (size)
	{
		/* Memory allocation for the hash table struct */
		ht = malloc(sizeof(hash_table_t));
		if (ht == NULL)
		{
			return (NULL);
		}

		/* Initialize @ht->size */
		ht->size = size;

		/* Memory allocation for the array elements */
		ht->array = malloc(size * sizeof(hash_node_t *));
		if (ht->array == NULL)
		{
			return (NULL);
		}

		/* Set all the hash table array elements to NULL */
		for (i = 0; i < size; i++)
		{
			ht->array[i] = NULL;
		}
		return (ht);
	}
	return (NULL);
}
