#include "lists.h"
/**
 * free_listint - this function frees a linked list called
 * listint_t.
 * @head: the linked list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *freeTemp;

	while (head)
	{
		freeTemp = head->next;
		free(head);
		head = freeTemp;
	}
}
