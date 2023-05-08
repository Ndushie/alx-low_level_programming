#include "main.h"
/**
 * _strchr - Locates a character in a string
 *
 * @s: Pointer to string to search.
 *
 * @c: Character to locate.
 *
 * Return: Pointer to c in string s, or null if c is not found
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
