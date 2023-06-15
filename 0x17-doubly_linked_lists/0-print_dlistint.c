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
	size_t nodes = 0;

	if (!h)
	{
		return (0);
	}
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
