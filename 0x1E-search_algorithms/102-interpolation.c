#include "search_algos.h"

/**
 * interpolation_search - this function searches for a value in a sorted array
 * of integers using interpolation search.
 * @array: the pointer to the first element of the array to search.
 * @size: the number of elements in the array.
 * @value: the value to search for.
 *
 * Return: the first index where the value is located (Success)
 * otherwise, -1 if the value is not present or the array is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (!array)
	{
		return (-1);
	}
	/* the code below performs the interpolation search */
	for (l = 0, r = size - 1; r >= l;)
	{
		i = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}
	return (-1);
}
