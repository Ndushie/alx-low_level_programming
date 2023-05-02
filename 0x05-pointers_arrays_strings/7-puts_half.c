#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 *
 * @str: the string to print
 */
void puts_half(char *str)
{
	int lengthstr = 0;
	int a, first_index;

	while (str[lengthstr] != '\0')
		lengthstr++;

	first_index = lengthstr % 2 == 0 ? lengthstr / 2 : (lengthstr - 1) / 2 + 1;

	for (a = first_index; a < lengthstr; a++)
		_putchar(str[a]);

	_putchar('\n');
}
