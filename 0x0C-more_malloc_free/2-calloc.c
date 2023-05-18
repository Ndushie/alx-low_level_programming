#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 *
 * @nmemb: The number of elements to allocate.
 *
 * @size: The size of each element in bytes.
 *
 * Return: Pointer to the allocated memory block, or NULL if allocation fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	
	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	memset(p, 0, nmemb * size);

	return (p);
}
