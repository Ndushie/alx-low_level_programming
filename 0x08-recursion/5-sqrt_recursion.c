#include "main.h"
/**
 * _sqrt_recursion - computes the natural square root of a number n.
 *
 * @n: the number to compute the square root of
 *
 * Return: the natural square root of n,
 * or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		int a;

		for (a = 1; a * a <= n; a++)
		{
			if (a * a == n)
			{
				return (a);
			}
		}
	}
	return (-1);
}
