#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 *
 * @s: the string to be printed in reverse, followed by a new line
 */
void print_rev(char *s)
{
	int lengthstr = 0;
	int a;

	while (*s != '\0')
	{
		lengthstr++;
		s++;
	}

	for (a = lengthstr; a > 0; a--)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
