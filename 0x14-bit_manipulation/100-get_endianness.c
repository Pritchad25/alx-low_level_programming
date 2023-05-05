#include "main.h"
/**
 * get_endianness - this function checks the endianness of a machine.
 * Return: 0 if the machine is big endian, otherwise 1
 * if the machine is little.
 */
int get_endianness(void)
{
	unsigned int temp = 1;
	char *e = (char *) &temp;

	return (*e);
}
