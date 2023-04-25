#include "main.h"
/**
 * print_times_table - prints the times table of n
 *
 * @n: rep the 1st value
 */
void print_times_table(int n)
{
	int a, b;
	if (n < 0 || n > 15)
	{
		return ;
	}

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			int answer = a * b;

			if (b == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(' ');
				if (answer < 10 )
				{
					_putchar(' ');
				}
			}
			if (answer < 10)
			{
				_putchar(' ');
				_putchar(answer + '0');
			}
			else if (answer < 100)
			{
				_putchar((answer / 10) + '0');
				_putchar((answer % 10) + '0');
			}
			else
			{
				_putchar((answer / 100) + '0');
				_putchar(((answer / 10) % 10) + '0');
				_putchar((answer % 10) + '0');
			}
			if (b != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
