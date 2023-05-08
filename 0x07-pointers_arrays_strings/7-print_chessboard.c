#include "main.h"
/**
 * print_chessboard - Prints the chessboard
 *
 * @a: Pointer to the chessboard array
 *
 * Return: the chessboard array
 */

void print_chessboard(char (*a)[8])
{
	int c, b;

	for (c = 0; c < 8; c++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[c][b]);
			if (b == 7)
				_putchar('\n');
		}
	}
}
