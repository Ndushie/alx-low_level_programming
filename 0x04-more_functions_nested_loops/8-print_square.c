#include "main.h"
/**
 * print_square - Prints a square using #
 *
 * @size: the number of times the # is printed to form a square
 *
 * Return: Always 0 Success
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
