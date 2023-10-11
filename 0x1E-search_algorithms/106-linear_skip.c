#include "search_algos.h"
/**
 * linear_skip - this function searches for a value in a sorted singly linked
 * list of integers using linear skip.
 * @list: the pointer to the head of the linked list to search.
 * @value: the value to search for.
 *
 * Return: NULL, if the value is not present or the head of the list is NULL.
 * Otherwise, a pointer to the first node where the value is located.
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jump;

	if (!list)
	{
		return (NULL);
	}
	/* the code below performs the linear skip */
	for (node = jump = list; jump->next != NULL && jump->n < value;)
	{
		node = jump;

		/* Checking whether the express lane is available */
		if (jump->express != NULL)
		{
			/* This code line jumps to the next express node */
			jump = jump->express;

			printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
		}
		else
		{
			/* the code line below traverses to the end of the list */
			while (jump->next != NULL)
				jump = jump->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	/* Performs a linear search by checking value of each node to find value*/
	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
