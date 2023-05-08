#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * of integers
 *
 * @a: the square matrix of integers
 *
 * @size: the size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int c, total1 = 0, total2 = 0;

	for (c = 0; c < size; c++)
	{
		total1 += *(a + c * size + c);
		total2 += *(a + c * size + size - 1 - c);
	}

	printf("%d, %d\n", total1, total2);
}
