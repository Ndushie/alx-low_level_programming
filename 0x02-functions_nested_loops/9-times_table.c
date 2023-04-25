#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: void
 *
 */
void times_table(void)
{
	int a, b, product;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			product = a * b;

			/* prints the product and comma */
			if (b == 0)
			{
				_putchar('0');
			}
			else if (product < 10)
			{
				_putchar(' ');
				_putchar('0' + product);
			}
			else
			{
				_putchar('0' + product / 10);
				_putchar('0' + product % 10);
			}

			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
