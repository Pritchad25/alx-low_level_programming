#include "lists.h"
/**
 * free_listint2 - this function frees a linked list called
 * listint_t.
 * @head: the pointer to the linked list to be freed.
 * Description: the function sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *freeTemp;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		freeTemp = (*head)->next;
		free(*head);
		*head = freeTemp;
	}

	*head = NULL;
}
