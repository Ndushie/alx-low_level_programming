#include "main.h"
/**
 * print_sign - prints the sign of a number
 *
 * Descrption: prints the above whether +ve 0 or -ve
 *
 * @n: The number to be checked
 *
 * Return: 0 if n is 0, -1 if n is -ve,1 if n is +ve
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
