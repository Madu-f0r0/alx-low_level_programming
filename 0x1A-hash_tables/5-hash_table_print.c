#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a the items in a hash table
 * @ht: the hash table whose items are to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	int first_item = 1;
	unsigned long int i;
	hash_node_t *temp;

	/* Do nothing if hash table does not exist */
	if (ht)
	{
		printf("{");
		/* Iterate through the hash table array */
		for (i = 0; i < ht->size; i++)
		{
			/* Attempt to print if the index is not empty */
			if ((ht->array)[i])
			{
				if (first_item == 0)
				{
					printf(", ");
				}
				printf("'%s':", (ht->array)[i]->key);

				/* Print array index list */
				temp = (ht->array)[i];
				while (temp)
				{
					printf(" '%s'", temp->value);
					temp = temp->next;
				}
				first_item = 0;
			}
		}
		printf("}\n");
	}
}
