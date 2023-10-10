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
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;

	printArray(array, size);
	if (!array || size == 0)
	{
		return (-1);
	}

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
		}
		else
		{
			return (-1);
		}
		if (left <= right)
		{
			printArray(&array[left], right - left + 1);
		}
	}

	return (-1);
}
