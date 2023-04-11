#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and
 * assign char c
 * @size: size of the array
 * @c: character to assign
 *
 * Return: pointer to the array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *stc;
	unsigned int i;

	stc = malloc(sizeof(char) * size);
	if (size == 0 || stc == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		stc[i] = c;
	return (stc);
}
