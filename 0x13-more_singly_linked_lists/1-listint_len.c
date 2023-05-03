#include "lists.h"
/**
 * listint_len - this function returns the number of elements in a
 * linked listint_t list.
 * @h: the linked list in which to traverse.
 *
 * Return: the number of elements, (Success).
 */
size_t listint_len(const listint_t *h)
{
	size_t num2 = 0;

	while (h)
	{
		num2++;
		h = h->next;
	}
	return (num2);
}
