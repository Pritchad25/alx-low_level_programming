#include "hash_tables.h"

/**
 * key_index - this function gets the index of a key.
 * @key: the key whose index is to be found.
 * @size: the size of the array of the hash table.
 *
 * Return: the index at which the key/value pair should be stored
 * in the array of the hash table (Success).
 *
 * Description: the function uses the djb2 algorithm.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
