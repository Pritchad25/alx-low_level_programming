#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - this allocates the sufficient memory
 * using malloc
 * @b: let b be the number of bytes to allocate
 *
 * Return: a pointer to the allocated memory. If malloc fails,
 * the function should cause normal process
 * termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	char *res;

	res = malloc(b);

	if (res == NULL)
	{
		exit(98);
	}
	return (res);
}
