#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - this function adds a new node at the
 * beginning of a dlisTint_t list
 * @head:  the pointer to the head node
 * @n: variable of type int
 *
 * Return: the address of the new element
 * (Success), otherwise NULL if the function failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_Node = malloc(sizeof(dlistint_t));

	if (new_Node == NULL)
	{
		return (NULL);
	}
	new_Node->n = n;
	new_Node->prev = NULL;
	new_Node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_Node;
	}
	*head = new_Node;

	return (new_Node);
}
