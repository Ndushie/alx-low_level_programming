#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n number of elements in an array
 *
 * @a: The array who's values are to be printed
 *
 * @n: The number of integers to be printed
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);

		if (b < n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
