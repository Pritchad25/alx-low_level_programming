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
	size_t counter = 0; /* the count variable */
	const dlistint_t *curr = h; /*the current node */

	while (curr != NULL)/* iterate through the list to print the elements.*/
	{
		printf("%d\n", curr->n);
		counter++;
		curr = curr->next;
	}

	return (counter);
}
