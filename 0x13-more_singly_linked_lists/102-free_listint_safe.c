#include "lists.h"
/**
 * free_listint_safe - this function frees a linked list
 * @h: the pointer to the first node in the linked list
 *
 * Return: the size of the linked list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	int x;
	listint_t *temp;
	size_t lenOfList = 0;

	if (!h || !*h)
	{
		return (0);
	}

	while (*h)
	{
		x = *h - (*h)->next;
		if (x > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			lenOfList++;
		}

		else
		{
			free(*h);
			*h = NULL;
			lenOfList++;
			break;
		}
	}
	*h = NULL;

	return (lenOfList);
}
