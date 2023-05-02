#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int lengthstr = 0;
	int a, b;
	char c;

	while (s[lengthstr] != '\0')
	{
		lengthstr++;
	}

	for (a = 0, b = lengthstr - 1; a < b; a++, b--)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;
	}
}
