#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - this function frees a dlistint_t
 * list
 * @head: the pointer to the head node
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head; /* the current node */
	dlistint_t *next;

	while (curr != NULL) /* iterate through the list and free the list */
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
}
