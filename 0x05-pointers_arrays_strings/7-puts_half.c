#include "main.h"

/**
 * puts_half - prints half of a string
 * The function should print the second half
 * the string
 * @str: input string
 * Return: no string
 */
void puts_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	str -= (len / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
