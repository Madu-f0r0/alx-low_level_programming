#include "hash_tables.h"
#include <stdio.h>

/**
 * key_index - derives an array index from a given key using the hash
 * function hash_djb2
 * @key: a string which will be passed to the hash_djb2 function
 * @size: the size of the hash table array
 *
 * Return: the derived index of the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value, arr_index;

	hash_value = hash_djb2(key);

	arr_index = hash_value - ((hash_value / size) * size);

	return (arr_index);
}
