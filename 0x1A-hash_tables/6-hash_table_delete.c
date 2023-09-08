#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to the deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *free_me, *temp;

	/* Only attempt to free memory for existent hash table */
	if (ht)
	{
		/* Iterate through the hash table array */
		for (i = 0; i < ht->size; i++)
		{
			/* Assign list at index to @temp */
			temp = (ht->array)[i];

			/* Execute until the list is empty */
			while (temp)
			{
				/* free @value which uses dynamic memory */
				free(temp->value);
				temp->value = NULL;

				/* Assign current node address to @free_me */
				free_me = temp;

				/* Move @temp to the next node of the list */
				temp = temp->next;

				/* Free memory of current node */
				free(free_me);
			}
		}
		/* free array memory */
		free(ht->array);

		/* free the hash table memory */
		free(ht);
	}
}
