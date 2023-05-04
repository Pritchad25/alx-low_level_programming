#include <stdio.h>
#include "lists.h"

size_t print_listint_safe(const listint_t *head);
size_t looped_listint_len(const listint_t *head);

/**
 * looped_listint_len - this function counts the number of unique
 * nodes in a looped linked list.
 * @head: the pointer to the head of the linked list to traverse
 * through.
 *
 * Return: the number of unique nodes in the linked list (Success),
 * otherwise 0 if the linked list is not looped through.
 */
size_t looped_listint_len(const listint_t *head)
{
	size_t nodes = 1;
	const listint_t *temp, *curr;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}
	temp = head->next;
	curr = (head->next)->next;

	while (curr)
	{
		if (temp == curr)
		{
			temp = head;

			while (temp != curr)
			{
				nodes++;
				temp = temp->next;
				curr = curr->next;
			}
			temp = temp->next;

			while (temp != curr)
			{
				nodes++;
				temp = temp->next;
			}

			return (nodes);
		}
		temp = temp->next;
		curr = (curr->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - this function prints a linked list safely
 * @head: the pointer to the head of the linked list
 *
 * Return: the number of nodes in the linked list (Success),
 * otherwise program exits with status 98 if function fails.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodeList, i = 0;

	nodeList = looped_listint_len(head);

	if (nodeList == 0)
	{
		for (; head != NULL; nodeList++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; i < nodeList; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodeList);
}
