#include "lists.h"
/**
 * reverse_listint - this function reverses a listint_t linked
 * list.
 * @head: the pointer to the first node in the linked list.
 *
 * Return: the pointer to the first node of the reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *previousNode = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previousNode;
		previousNode = *head;
		*head = next;
	}
	*head = previousNode;

	return (*head);
}
