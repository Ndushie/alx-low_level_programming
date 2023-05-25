#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 *
 * @n: The number of arguments.
 *
 * Return: The sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int result = 0;
	unsigned int a;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (a = 0; a < n; a++)
	{
		result += va_arg(args, int);
	}

	va_end(args);

	return (result);
}
