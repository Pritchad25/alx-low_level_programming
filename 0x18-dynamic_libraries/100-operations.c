#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/**
 * add - this function adds 2 integers together.
 * @a: the first integer
 * @b: the second integer.
 * Return: the sum of the two integers (Success)
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - this function returns the difference between
 * 2 integers.
 * @a: the first integer
 * @b: the second integer
 * Return: the difference between the 2 integers (Success)
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - this function multiplies 2 integers.
 * @a: the firt integer
 * @b: the second integer
 * Return: the result of the multiplication (Success)
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - this function returns the quotient of the
 * division between 2 integers
 * @a: the first integer
 * @b: the second integer
 * Return: the quotient of the division between 2 integers
 * (Success)
 */
int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - this function returns the division remainder
 * between 2 integers.
 * @a: the first integer
 * @b: the second integer
 * Return: the division remainder (Success)
 */
int mod(int  a, int b)
{
	return (a % b);
}
