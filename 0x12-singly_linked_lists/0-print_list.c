#include <stdio.h>
#include "lists.h"
/**
 * print_list - this function prints all the elements of a linked list
 * @h: the pointer to the list_t list to print
 *
 * Return: the number of nodes printed by the function
 */
size_t print_list(const list_t *h)
{
	size_t t = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		t++;
	}
	return (t);
}
