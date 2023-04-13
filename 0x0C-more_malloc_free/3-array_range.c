#include <stdlib.h>
#include "main.h"
/**
 * *array_range - this function creates an array of integers.
 * @min: the minimum value and the value at start of array
 * @max: the maximum value and the value at end of array
 *
 * Return: the pointer to the new array that has been created or
 * if min > max, the function returns NULL,
 * if malloc fails, the function returns NULL.
 */
int *array_range(int min, int max)
{
	int g, sizeofarray;
	int *arr1;

	if (min > max)
	{
		return (NULL);
	}
	sizeofarray = max - min + 1;
	arr1 = malloc(sizeof(int) * sizeofarray);
	if (arr1 == NULL)
	{
		return (NULL);
	}
	for (g = 0; min <= max; g++)
	{
		arr1[g] = min++;
	}
	return (arr1);
}
