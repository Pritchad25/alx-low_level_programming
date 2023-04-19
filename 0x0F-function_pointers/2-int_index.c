#include "function_pointers.h"
/**
 * int_index - the function returns the index place if the
 * comparison = true, else -1
 * @array: the array
 * @size: the number of elements in the array
 * @cmp: the pointer to the function to be used to compare values
 * which is one of the 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
		{
			return (x);
		}
	}
	return (-1);
}
