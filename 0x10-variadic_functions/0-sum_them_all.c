#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - the functions returns the sum of all
 * its parameters
 * @...: the variable number of parameters whose sum is to be calculated
 * @n: the number of parameters passed directly to the function
 * Return: 0, if n == 0, otherwise, the sum of all
 * the parameters to the function
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int y, sum = 0;
	va_list tt;

	va_start(tt, n);
	for (y = 0; y < n; y++)
	{
		sum += va_arg(tt, int);
	}
	va_end(tt);
	return (sum);
}
