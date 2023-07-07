#include "hash_tables.h"

/**
 * hash_table_get - this function retrieves the value
 * associated with a key.
 * @ht: the pointer to the hash table.
 * @key: the key whose value is to be retrieved.
 *
 * Return: the value associated with the element (Success)
 * otherwise NULL if key couldn’t be found (Failure).
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
	{
		return (NULL);
	}
	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
	{
		node = node->next;
	}

	return ((node == NULL) ? NULL : node->value);
}
