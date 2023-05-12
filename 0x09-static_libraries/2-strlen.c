#include "main.h"

/**
 * _strlen - prints the length of a string
 *
 * @s: The string
 *
 * Return: lengthstr
 */
int _strlen(char *s)
{
	int lengthstr = 0;

	while (*s != '\0')
	{
		lengthstr++;
		s++;
	}
	return (lengthstr);
}
