#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string, followed by a new line
 * @str: input string
 * Return: no return
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

/**
 * main - check the code
 * Return: Always 0
 */
int main(void)
{
	char *str;

	str = "\"Programming is like building a multilingual puzzle";
	_puts(str);
	return (0);
}
