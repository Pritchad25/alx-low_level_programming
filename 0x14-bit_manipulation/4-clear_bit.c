#include "main.h"
/**
 * clear_bit - this function sets the value of a bit at a given index to 0.
 * @index: the index of the bit that is to be set.
 * @n: the number to change.
 *
 * Return: 1 (Success), otherwise -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = (~(1UL << index) & *n);

	return (1);
}
