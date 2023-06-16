#include "lists.h"
#include <stddef.h>

/**
 * sum_dlistint - this function returns the sum of
 * all the data of a linked list
 * @head: the pointer to the head node
 *
 * Return: the sum of the data (Success) otherwise
 * 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head; /*current node*/
	int sum = 0;

	while (curr != NULL) /* iterate the doubly linked list to return the sum */
	{
		sum += curr->n;
		curr = curr->next;
	}

	return (sum);
}
