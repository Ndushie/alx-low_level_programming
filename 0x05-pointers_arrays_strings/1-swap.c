#include "main.h"
/**
 * swap_int - swaps the values of 2 integers
 *
 * @a: 1st integer to be swapped
 *
 * @b: 2nd integer to be swapped
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
