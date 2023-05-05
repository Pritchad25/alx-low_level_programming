#include "lists.h"
/**
 * find_listint_loop - this function finds the loop in a linked
 * list
 * @head: the pointer of the linked list to traverse through.
 *
 * Return: the address of the node where the loop starts (Success)
 * otherwise NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp = head;
	listint_t *curr = head;

	if (!head)
	{
		return (NULL);
	}

	while (temp && curr && curr->next)
	{
		curr = curr->next->next;
		temp = temp->next;

		if (curr == temp)
		{
			temp = head;
			while (temp != curr)
			{
				temp = temp->next;
				curr = curr->next;
			}

			return (curr);
		}
	}
	return (NULL);
}
