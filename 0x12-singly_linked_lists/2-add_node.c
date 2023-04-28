#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - this function adds a new node at the beginning
 * of a linked list
 * @str: the new string to add in the node
 * @head: the double pointer to the list_t list
 * Return: the address of the new element, or NULL
 * if the function fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
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
	newNode->next = (*head);
	(*head) = newNode;

	return (*head);
}
