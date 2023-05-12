#include "main.h"
/**
 * _strcat - Concatenates two strings.
 *
 * @dest: The destination string.
 *
 * @src: The source string to be appended.
 *
 * Return: Pointer to the resulting string `dest`.
 */
char *_strcat(char *dest, char *src)
{
	int dest_length = 0;
	int a = 0;

	while (dest[dest_length] != '\0')
		dest_length++;
	while (src[a] != '\0')
	{
		dest[dest_length + a] = src[a];
		a++;
	}
	dest[dest_length + a] = '\0';
	return (dest);
}
