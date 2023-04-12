#include <stdlib.h>
#include "main.h"
/**
 * count_word - the function whose purpose
 * is to count the number of words in a given string
 * @s: the string to evaluate
 *
 * Return: the number of words in a given string
 */
int count_word(char *s)
{
	int flag, a, x;

	flag = 0;
	x = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			x++;
		}
	}
	return (x);
}
/**
 * **strtow - the function splits a string into words
 * @str: the string to split
 *
 * Return: the pointer to an array of strings(Success) or NULL(Error)
 */
char **strtow(char *str)
{
	char **grid, *tmp;
	int f, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	grid = (char **) malloc(sizeof(char *) * (words + 1));
	if (grid == NULL)
		return (NULL);
	for (f = 0; f <= len; f++)
	{
		if (str[f] == ' ' || str[f] == '\0')
		{
			if (c)
			{
				end = f;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				grid[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = f;
	}
	grid[k] = NULL;

	return (grid);
}
