#include "lists.h"

/**
 * get_nodeint_at_index - this function returns the nth node of a linked list,
 * meaning it returns the node at a particular index.
 * @index: the index of the node
 * @head: the first node in the linked list listint_t.
 *
 * Return: the address or pointer of the node (Success) or
 * NULL if the node doesnt exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num3 = 0;
	listint_t *tempNode = head;

	while (tempNode && num3 < index)
	{
		tempNode = tempNode->next;
		num3++;
	}

	return (tempNode ? tempNode : NULL);
}
