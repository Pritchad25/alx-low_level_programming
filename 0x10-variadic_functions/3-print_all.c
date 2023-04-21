#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - the function prints anything.
 * @format: the list of the types of arguments passed to the
 * function
 * Return: Anything that should be printed out when the
 * function main is compiled.
 */
void print_all(const char * const format, ...)
{
	char *mddl = "", *m;
	char g;
	unsigned int x = 0, index;
	float floatChar;
	va_list lis;

	va_start(lis, format);
	while (format[x])
	{
		switch (format[x])
		{
			case 'i':
				index = va_arg(lis, int);
				printf("%s%d", mddl, index);
				break;
			case 's':
				m = va_arg(lis, char *);
				if (m == NULL)
				{
					printf("%s(nil)", mddl);
				}
				printf("%s%s", mddl, m);
				break;
			case 'c':
				g = va_arg(lis, int);
				printf("%s%c", mddl, g);
				break;
			case 'f':
				floatChar = va_arg(lis, double);
				printf("%s%f", mddl, floatChar);
				break;
			default:
				x++;
				continue;
		}
		mddl = ", ";
		x++;
	}
	putchar('\n');
	va_end(lis);
}
