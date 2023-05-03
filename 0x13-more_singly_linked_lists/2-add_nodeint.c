#include "lists.h"
/**
 * add_nodeint - this function adds a new node at the beginning of a linked
 * listint_t list.
 * @n: the data to insert in the new node
 * @head: the pointer to the first node in the linked list.
 *
 * Return: the address of the new element, or NULL if the function failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
