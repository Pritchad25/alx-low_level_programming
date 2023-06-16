#include "lists.h"
#include <stddef.h>
/**
 * dlistint_len - this function returns the number of elements
 * in a doubly linked list.
 *
 * @h: the head of the list.
 * Return: the number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr = h; /*the pointer to the current node.*/
	size_t counter = 0; /* the count variable */

	while (curr != NULL) /*iterate and print number of elements.*/
	{
		counter++;
		curr = curr->next;
	}
	return (counter);
}
