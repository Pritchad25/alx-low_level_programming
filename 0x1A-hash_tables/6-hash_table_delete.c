#include "hash_tables.h"

/**
 * hash_table_delete - this function deletes a hash table.
 * @ht: a pointer to the hash table to be deleted.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	unsigned long int i;
	hash_node_t *node, *tmp;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
