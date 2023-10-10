#include "search_algos.h"
/**
 * jump_search - this function searches for a value in a sorted array
 * of integers using jump search.
 * @array: the pointer to the first element of the array to search.
 * @size: the number of elements in the array.
 * @value: the value to search for.
 *
 * Return: -1, if the value is not present or the array is NULL
 * otherwise, the first index where the value is located(Success).
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	/* Catering for the case where the array is NULL or empty */
	if (!array || size == 0)
	{
		return (-1);
	}
	/* the following calculates the size of the jump step*/
	step = sqrt(size);

	/* The code below in loop performs the jump search */
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		/* the part below stores the previous jump position */
		i = jump;

		/* The code line below updates the jump step*/
		jump += step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);
	/* Modifying the jump position */
	jump = jump < size - 1 ? jump : size - 1;

	/* A linear search is performed within the identified range */
	for (; i < jump && array[i] < value; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	/* Return the corresponding index if the value is found */
	return (array[i] == value ? (int)i : -1);
}
