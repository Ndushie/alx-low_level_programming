#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 *
 * @array: Pointer to the array.
 *
 * @size: Number of elements in the array.
 *
 * @cmp: Pointer to the function used to compare values.
 *
 * Return: Index of the first element for which cmp function does not return 0,
 *         -1 if no element matches or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]) != 0)
				return (a);
		}
	}
	return (-1);
}
