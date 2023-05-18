#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to previously allocated memory
 *
 * @old_size: size in bytes of allocated space for ptr
 *
 * @new_size: size in bytes of new memory block
 *
 * Return: pointer to new memory block, or NULL if failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int copy_size;
	void *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	copy_size = old_size < new_size ? old_size : new_size;
	memcpy(new_ptr, ptr, copy_size);
	free(ptr);

	return (new_ptr);
}
