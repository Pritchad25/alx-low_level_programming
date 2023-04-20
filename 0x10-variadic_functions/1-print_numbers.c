#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - this functions prints the numbers, followed by a new
 * line
 * @n: the number of integers passed to the function
 * @separator: the string to be printed between numbers
 * @...: the variable number of numbers to be printed
 * Return: the numbers and a new line
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list digits;

	va_start(digits, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(digits, int));
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(digits);
}
