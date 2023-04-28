#include <stdio.h>

void first(void) __attribute__ ((constructor));
/**
 * bmain - the function prints a sentence before the main function
 * is executed.
 *
 * Return: nothing
 */
void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow, \n");
	printf("I bore my house upon my back!\n");
}
