#include "search.h"
#include <stddef.h>
#include <stdio.h>

/**
 * linear_search - this function searches for a value in an array using
 * the linear search algorithm.
 * @array: the pointer to the first element of the array to be searched.
 * @size: the number of elements in the array.
 * @value: the value to search for.
 *
 * Return: the first index where @value is located(Success), or -1
 * if not found.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
