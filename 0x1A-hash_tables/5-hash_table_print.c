#include "hash_tables.h"

/**
 * hash_table_print - this function prints a hash table.
 * @ht: the pointer to the hash table to print.
 *
 * Description: the key/value pairs will be printed in the order
 * they appear in the array of the hash table.
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (comma_flag == 1)
			{
				printf(", ");
			}
			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
