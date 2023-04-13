#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - the function concatenates n bytes of a string
 * to another string
 * @s1: the string to append to
 * @s2: the string whose part is to be concatenated
 * @n: the number of bytes from s2 to concatenate to s1
 * Return: the pointer to a newly allocated space in memory
 * containing s1 and first n bytes of s2, if the function fails,
 * it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int b = 0, d = 0, max1 = 0, min2 = 0;

	while (s1 && s1[max1])
		max1++;
	while (s2 && s2[min2])
		min2++;
	if (n < min2)
		a = malloc(sizeof(char) * (max1 + n + 1));
	else
		a = malloc(sizeof(char) * (max1 + min2 + 1));
	if (!a)
		return (NULL);

	while (b < max1)
	{
		a[b] = s1[b];
		b++;
	}

	while (n < min2 && b < (max1 + n))
		a[b++] = s2[d++];
	while (n >= min2 && b < (max1 + min2))
		a[b++] = s2[d++];
	a[b] = '\0';

	return (a);
}
