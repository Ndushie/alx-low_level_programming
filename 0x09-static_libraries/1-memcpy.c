#include "main.h"
/**
 * _memcpy - Copies memory area
 *
 * @dest: Pointer to the destination memory area
 *
 * @src: Pointer to the source memory area
 *
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	for (; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
