#include "lists.h"

/**
 * sum_listint - this function computes the sum of all the data
 * of a linked list.
 * @head: the first node in the linked list listint_t.
 *
 * Return: the sum of all the data (Success), 0 if the linked list
 * is empty.
 */
int sum_listint(listint_t *head)
{
	listint_t *tempNode = head;
	int sumOfData = 0;

	while (tempNode)
	{
		sumOfData += tempNode->n;
		tempNode = tempNode->next;
	}
	return (sumOfData);
}
