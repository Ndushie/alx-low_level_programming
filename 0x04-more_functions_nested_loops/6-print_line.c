#include "main.h"
/**
 * print_line - Draws a straight line in the terminal
 *
 * @n: The number of lines to draw
 *
 * Return: Empty
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
	_putchar('\n');
}
