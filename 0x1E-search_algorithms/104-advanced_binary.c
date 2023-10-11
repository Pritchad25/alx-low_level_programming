#include "search_algos.h"

/**
 * advanced_binary_recursive - this function searches recursively for a
 * value in a sorted array of integers using binary search.
 * @array: the pointer to the first element of the [sub]array to search.
 * @left: the starting index of the [sub]array to search.
 * @right: the ending index of the [sub]array to search.
 * @value: the value to search for.
 *
 * Return: the index where the value is located (Success)
 * otherwise, -1 if the value is not present.
 *
 * Description: this function prints the [sub] array being searched after
 * each change.
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	/* In case the right boundary is less than left boundary. */
	if (right < left)
	{
		/* Return -1, if value is not found */
		return (-1);
	}
	printf("Searching in array: ");

	/* the code below prints the [sub]array being searched */
	for (i = left; i < right; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
	/* Determine the middle index */
	i = left + (right - left) / 2;

	/* in case middle element is value and is first occurrence, return index. */
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);

	/* In case middle element is greater or equal to the value */
	if (array[i] >= value)
		/* code below recursively searches the left subarray */
		return (advanced_binary_recursive(array, left, i, value));
	/* Otherwise, it recursively searches the right subarray */
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
 * advanced_binary - this function searches for a value in a sorted array
 * of integers using advanced binary search.
 * @array: the pointer to the first element of the array to search.
 * @size: the number of elements in the array.
 * @value: the value to search for.
 *
 * Return: the first index where the value is located (Success).
 * otherwise, -1 if the value is not present or the array is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
	{
		return (-1);
	}
	return (advanced_binary_recursive(array, 0, size - 1, value));
}
