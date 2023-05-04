#include "main.h"
/**
 * reverse_array - reverse array of integers
 *
 * @a: array
 *
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int first = 0;
	int last = n - 1;
	int t;

	while (first < last)
	{
	t = a[first];
	a[first] = a[last];
	a[last] = t;
	first++;
	last--;
	}
}
