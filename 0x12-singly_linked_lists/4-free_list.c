#include <stdlib.h>
#include "lists.h"
/**
 * free_list - this function frees a linked list.
 * @head: the list_t linked list to be freed
 */

void free_list(list_t *head)
{
	list_t *newTemp;

	while (head)
	{
		newTemp = head->next;
		free(head->str);
		free(head);
		head = newTemp;
	}
}
