#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: the string to concatenate
 * @s2: another string to concatenate
 * Return: pointer to the concatenation of s1
 * and s2(Success) or NULL(Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *concatt;
	int i, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	concatt = malloc(sizeof(char) * (i + ci + 1));
	if (concatt == NULL)
		return (NULL);
	i = ci = 0;
	while (s1[i] != '\0')
	{
		concatt[i] = s1[i];
		i++;
	}
	while (s2[ci] != '\0')
	{
		concatt[i] = s2[ci];
		i++;
		ci++;
	}
	concatt[i] = '\0';
	return (concatt);
}

