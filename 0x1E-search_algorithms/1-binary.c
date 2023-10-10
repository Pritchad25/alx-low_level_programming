#include "search.h"
#include <stddef.h>
#include <stdio.h>

/**
 * printArray - this function prints the elements of an array.
 * @array: the array to be printed.
 * @size: the size of the array.
 * Return: Nothing.
 */
void printArray(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: [");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
		{
			printf(", ");
		}
	}
	printf("]\n");
}

/**
 * binary_search - this function searches for a value in a sorted array using
 * binary search.
 * @array: the sorted array to search in.
 * @size: the size of the array.
 * @value: the value to search for.
 *
 * Return: the index of the value in the array(Success), or -1 if not found.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (!array)
	{
		return (-1);
	}
	/* The Binary search */
	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		/* The calculation of the middle index */
		i = left + (right - left) / 2;
		/* If the middle element is the value */
		if (array[i] == value)
			/* return that particular index */
			return (i);

		/* If the element in the middle is greater than the value */
		if (array[i] > value)
			/* Update the boundary on the right */
			right = i - 1;
		else
			/* Otherwise update the boundary on the left */
			left = i + 1;
	}
	return (-1);
}
