#include <stdlib.h>
#include "lists.h"
/**
 * list_len - this function returns the number of elements
 * in a linked list called list_t
 * @h: the pointer to the list_t list
 * Return: the number of elemenst in h
 */
size_t list_len(const list_t *h)
{
	unsigned int x = 0;

	while (h != NULL)
	{
		x++;
		h = h->next;
	}
	return (x);
}
