#include "3-calc.h"

/**
 * op_add - Adds two integers
 *
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two integers
 *
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: The difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers
 *
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers
 *
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: The result of dividing a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Calculates the modulo of two integers
 *
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: The remainder of dividing a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
