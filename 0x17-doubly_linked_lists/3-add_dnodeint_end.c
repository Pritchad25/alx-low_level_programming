#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - this function adds a new node at
 * the end of a doubly linked list
 * @head: the pointer to the head node
 * @n: the integer variable
 *
 * Return: the address of the new element (Success)
 * or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last = *head;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	/* adds a new node at the end of a list */
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;

		return (newNode);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = newNode;
	newNode->prev = last;

	return (newNode);
}
