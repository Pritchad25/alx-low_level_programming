#include "lists.h"
#include <stddef.h>

/**
 * insert_dnodeint_at_index - this function inserts a new node
 * at a given position
 * @h: the pointer to the head node.
 * @idx: the unsigned integer
 * @n: the integer variable.
 *
 * Return: the address of the new node (Success), othwerwise
 * NULL if the function failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	unsigned int count = 0;
	dlistint_t *new_node;

	if (h == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	current = *h;
	/* inserts a new node at a given position */
	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL || current->next == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;
	current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
