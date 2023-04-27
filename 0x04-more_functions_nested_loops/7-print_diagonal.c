#include "main.h"
/**
 * print_diagonal - Draws diagonal lines according to parameter
 *
 * @n: The number of times to print diagonal lines
 *
 * Return: Empty
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar ('\\');
			_putchar ('\n');
		}
	}

}
