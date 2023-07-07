#include "hash_tables.h"

/**
 * hash_table_create - this function creates a hash table.
 * @size: the size of the array.
 *
 * Return: NULL, if an error occurs. otherwise
 * a pointer to the new hash table (Success)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashT;
	unsigned long int a;

	hashT = malloc(sizeof(hash_table_t));
	if (hashT == NULL)
	{
		return (NULL);
	}
	hashT->size = size;
	hashT->array = malloc(sizeof(hash_node_t *) * size);
	if (hashT->array == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		hashT->array[a] = NULL;
	}
	return (hashT);
}
