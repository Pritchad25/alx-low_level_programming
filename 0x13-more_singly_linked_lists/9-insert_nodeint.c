#include "lists.h"
/**
 * insert_nodeint_at_index - this function inserts a new node at a specified
 * position in the linked list.
 * @n: the data to insert in the new node.
 * @head: the pointer to the first node in the linked list.
 * @idx: the index where the new node is added.
 *
 * Return: the address of the new node (Success) or NULL if
 * the function failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	unsigned int x;
	listint_t *tempNode = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode || !head)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;

		return (newNode);
	}
	for (x = 0; tempNode && x < idx; x++)
	{
		if (x == idx - 1)
		{
			newNode->next = tempNode->next;
			tempNode->next = newNode;

			return (newNode);
		}
		else
		{
			tempNode = tempNode->next;
		}
	}

	return (NULL);
}
