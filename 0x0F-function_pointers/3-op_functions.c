#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int op_mul(int a, int b);

/**
 * op_sub - the function returns the difference of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - the function returns the product of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the product of a nd b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_add - the function returns the sum of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_div - the function returns the division of 2 numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the Quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - the function returns the remainder of the division of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
