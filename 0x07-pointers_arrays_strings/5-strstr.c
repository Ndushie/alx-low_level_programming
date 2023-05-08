#include "main.h"
/**
 * _strstr - locates a substring.
 *
 * @haystack: the string to be searched.
 *
 * @needle: the substring to be located.
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; haystack[a]; a++)
	{
		for (b = 0; needle[b]; b++)
		{
			if (needle[b] != haystack[a + b])
				break;
		}
		if (!needle[b])
			return (haystack + a);
	}
	return ('\0');
}
