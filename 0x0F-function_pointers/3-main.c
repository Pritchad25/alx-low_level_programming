#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * main - Prints the result of simple operations.
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointers to the arguments supplied.
 *
 * Return: Always 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int firstInt, secondInt;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	firstInt = atoi(argv[1]);
	op = argv[2];
	secondInt = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && secondInt == 0) || (*op == '%' && secondInt == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(firstInt, secondInt));

	return (0);
}
