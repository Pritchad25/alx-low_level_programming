#include "hash_tables.h"

/**
 * hash_djb2 - a hash function implementing the djb2 algorithm.
 * @str: the string to hash.
 *
 * Return: the calculated hash (Success)
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	int b;
	unsigned long int hash;

	hash = 5381;
	while ((b = *str++))
	{
		hash = ((hash << 5) + hash) + b;
	}
	return (hash);
}
