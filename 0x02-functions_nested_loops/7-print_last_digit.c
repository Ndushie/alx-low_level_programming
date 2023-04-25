#include "main.h"
/**
 * print_last_digit - computes and prints the last digit of a number
 *
 * Description: does the above
 *
 * @n: number to be checked and computed
 *
 * Return: returns the value of the last digit
 */
int print_last_digit(int n)
{
	int a = n % 10;

	if (a < 0)
	{
		a = -a;
	}
	_putchar(a + '0');
	return (a);
}
