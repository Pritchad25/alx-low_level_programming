#include "search_algos.h"

/**
 * _binary_search - this function searches for a value in a sorted array
 * of integers using binary search.
 * @array: the pointer to the first element of the array to search.
 * @left: the starting index of the [sub]array to search.
 * @right: the ending index of the [sub]array to search.
 * @value: the value to search for.
 *
 * Return: the index where the value is located(Success)
 * otherwise, -1 if the value is not present or the array is NULL.
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (!array)
	{
		return (-1);
	}
	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		/* determines the middle index */
		i = left + (right - left) / 2;

		/* If the middle element is the value, return the index */
		if (array[i] == value)
		{
			return (i);
		}
		/* If middle element is greater than value, update the right boundary*/
		if (array[i] > value)
		{
			right = i - 1;
		}
		else
		{
			/* Otherwise, the boundary on the left is updated */
			left = i + 1;
		}
	}
	/* return -1 if value isnt present or cant be found. */
	return (-1);
}

/**
 * exponential_search - this function searches for a value in a sorted array
 * of integers using exponential search.
 * @array: the pointer to the first element of the array to search.
 * @size: the number of elements in the array.
 * @value: the value to search for.
 *
 * Return: the index where the value is located (Success).
 * otherwsie, -1 if the value is not present or the array is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (!array)
	{
		return (-1);
	}
	/* Performs the exponential search if the 1ST element isnt the target */
	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		}
	}
	/* The code below finds the range where the value is expected to be found */
	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	/* The code line below performs binary search within the identified range */
	return (_binary_search(array, i / 2, right, value));
}
