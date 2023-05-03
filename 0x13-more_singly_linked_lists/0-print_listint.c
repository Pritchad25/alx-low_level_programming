#include "lists.h"
/**
 * print_listint - this function prints all the elements of a
 * linked list called listint_t.
 * @h: the linked list listint_t to print
 *
 * Return: the number of nodes, (Success).
 */
size_t print_listint(const listint_t *h)
{
	size_t num1 = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num1++;
		h = h->next;
	}
	return (num1);
}
