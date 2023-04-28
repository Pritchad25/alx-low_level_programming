#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - this function adds a new node at the end
 * of a linked list called list_t
 * @str: the string to put in the new node.
 * @head: the double pointer to the list_t list
 * Return: the address of the new element, or NULL
 * if the function fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *temp = *head;
	list_t *newNode;

	while (str[len])
	{
		len++;
	}
	newNode = malloc(sizeof(list_t));
	if (!newNode)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = len;
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
