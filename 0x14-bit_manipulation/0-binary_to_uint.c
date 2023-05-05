#include "main.h"
/**
 * binary_to_uint - this function converts a binary number to unsigned int
 * @b: is pointing to a string of 0 and 1 chars.
 *
 * Return: the converted number(Success) or 0 if there is one or more
 * chars in the string b that is not 0 or 1 or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimalNum = 0;
	int x;

	if (!b)
	{
		return (0);
	}

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
		{
			return (0);
		}

		decimalNum = 2 * decimalNum + (b[x] - '0');
	}
	return (decimalNum);
}
