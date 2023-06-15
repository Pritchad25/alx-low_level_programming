#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_dlistint - this function prints a doubly linked
 * list.
 * @h: the pointer to the list
 *
 * Return: the number of nodes in the linked
 * list (Success)
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
	{
		return (count);
	}
	while (h->prev != NULL)
	{
		h = h->prev;
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
