#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - the function prints each array element
 * @array: the array
 * @size: the number of elements to print
 * @action: the pointer to the function to use and
 * also the pointer to print in regular or in hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int q;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (q = 0; q < size; q++)
	{
		action(array[q]);
	}
}
