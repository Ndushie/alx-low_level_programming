#include "main.h"
/**
 * _abs - prints the absolute value of an integer
 *
 * Description: does the above
 *
 * @n: the value of the integer to be computed
 *
 * Return: -n or n to show absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
