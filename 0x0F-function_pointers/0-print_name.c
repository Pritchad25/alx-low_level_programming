#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - this function prints the name using
 * the pointer to the function
 * @f: the pointer to the function
 * @name: the string to add
 * Return: none
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
