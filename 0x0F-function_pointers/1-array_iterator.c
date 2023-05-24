#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Executes a function on each element of an array.
 *
 * @array: Pointer to the array.
 *
 * @size: Size of the array.
 *
 * @action: Pointer to the function to be executed.
 *
 * Return: None.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array != NULL && action != NULL)
	{
		for (a = 0; a < size; a++)
		{
			action(array[a]);
		}
	}
}
