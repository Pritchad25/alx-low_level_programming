#include "lists.h"
/**
 * add_nodeint_end - this function adds a node at the end of a linked listint_t
 * list.
 * @n: the data to insert inside the new node.
 * @head: the pointer to the first element in the linked list
 *
 * Return: the address of the new element or NULL if the function failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;

		return (newNode);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = newNode;

	return (newNode);
}
