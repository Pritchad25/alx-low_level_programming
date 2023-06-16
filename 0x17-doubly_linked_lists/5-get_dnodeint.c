#include "lists.h"
#include <stddef.h>

/**
 * get_dnodeint_at_index - this function returns the nth node
 * of a dlistint_t linked list.
 * @head: the pointer to the head node
 * @index: the unsigned integer
 *
 * Return: the nth node (Success) or NULL if
 * the function fails.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0; /* the count variable */
	dlistint_t *current = head;

	while (current != NULL) /* iterate through the list and return the nth node */
	{
		if (counter == index)
		{
			return (current);
		}

		counter++;
		current = current->next;
	}

	return (NULL);
}
