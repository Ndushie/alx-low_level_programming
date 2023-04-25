#include "main.h"
/**
 * print_times_table - Prints the times table of n
 *
 * starting with 0
 *
 * @n: The value to be printed
 */
void print_times_table(int n)
{
	int a, b, product;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				_putchar(',');
				_putchar(' ');
				product = a * b;
				if (product <= 99)
					_putchar(' ');
				if (product <= 9)
					_putchar(' ');
				if (product >= 100)
				{
					_putchar((product / 100) + '0');
					_putchar((product / 10) % 10 + '0');
				}
				else if (product <= 99 && product >= 10)
				{
					_putchar((product / 10) + '0');
				}
			}
			_putchar((product % 10) + '0');
		}
		_putchar('\n');

	}
}
