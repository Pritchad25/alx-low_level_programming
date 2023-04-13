#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - this function reallocates a memory block using
 * malloc and free
 * @ptr: the pointer to the memory previously allocated
 * using malloc: malloc(old_size)
 * @old_size: the size of the allocated memory space for the pointer, ptr
 * @new_size: the new size of the new memory block
 *
 * Return: the pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int mem1;
	char *ptr1;
	char *old_ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (mem1 = 0; mem1 < new_size; mem1++)
			ptr1[mem1] = old_ptr[mem1];
	}

	if (new_size > old_size)
	{
		for (mem1 = 0; mem1 < old_size; mem1++)
			ptr1[mem1] = old_ptr[mem1];
	}
	free(ptr);
	return (ptr1);
}
