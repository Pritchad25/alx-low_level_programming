#include "lists.h"
/**
 * delete_nodeint_at_index - this function deletes a node at a specified
 * index in the linked list.
 * @index: the index of node to be deleted.
 * @head: the pointer of the first element in the linked list.
 *
 * Return: 1 Success, -1 if function fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int num = 0;
	listint_t *tempNode = *head;
	listint_t *currentNode = NULL;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(tempNode);

		return (1);
	}
	while (num < index - 1)
	{
		if (!tempNode || !(tempNode->next))
		{
			return (-1);
		}
		tempNode = tempNode->next;
		num++;
	}

	currentNode = tempNode->next;
	tempNode->next = currentNode->next;
	free(currentNode);

	return (1);
}
