#include "lists.h"

/**
 * pop_listint - this function deletes the head node of a linked
 * list called listint_t
 * @head: the pointer to the head node or the first element in the linked
 * list.
 *
 * Return: the data in the head node that was deleted, (Success),
 * or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	int num1;
	listint_t *tempNode;

	if (!head || !*head)
	{
		return (0);
	}

	num1 = (*head)->n;
	tempNode = (*head)->next;
	free(*head);
	*head = tempNode;

	return (num1);
}
