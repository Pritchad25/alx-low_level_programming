#include "main.h"

/**
 * swap_int - Swaps the values of 2 integers.
 * @a: First argument to be swapped
 * @b: Second argument to be swapped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
