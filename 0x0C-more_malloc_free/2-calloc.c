#include <stdlib.h>
#include "main.h"
/**
 * *_memset - the function that will fill memory
 * with a constant byte
 * @s: the memory area that is to be filled
 * @n: the number of times to copy the character b
 * @b: the character to copy
 *
 * Return: the pointer to the memory area which is s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
/**
 * *_calloc - this function allocates memory for
 * an array using malloc
 * @nmemb: the number of elements in the array
 * @size: the size of each element of the array
 *
 * Return: the pointer to the allocated memory for an array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * nmemb);
	if (arr == NULL)
	{
		return (NULL);
	}
	_memset(arr, 0, nmemb * size);

	return (arr);
}
