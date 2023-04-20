#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - this function prints strings, followed by a new line.
 * @n: The number of strings to be passed to the function.
 * @separator: the string to be printed between strings
 * @...: A variable number of strings to be printed
 * Return: the strings (Success), otherwise, if one of the
 * strings is NULL, nil is printed. If the separator is NULL, it
 * will not be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *trm;
	va_list terms;
	unsigned int alpha;

	va_start(terms, n);
	for (alpha = 0; alpha < n; alpha++)
	{
		trm = va_arg(terms, char *);
		if (trm == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", trm);
		}
		if (alpha != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(terms);
}
