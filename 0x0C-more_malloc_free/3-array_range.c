#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 *
 * @min: minimum value (included)
 * @max: maximum value (included)
 *
 * Return: pointer to the newly created array, or NULL if failure
 */
int *array_range(int min, int max)
{
	int *arr;
	int a;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (a = 0; min <= max; a++, min++)
		arr[a] = min;

	return (arr);
}
