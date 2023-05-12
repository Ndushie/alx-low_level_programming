#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the string converted to an integer
 */
int _atoi(char *s)
{
	int a, b, c, lengthstr, d, integer;

	a = 0;
	b = 0;
	c = 0;
	lengthstr = 0;
	d = 0;
	integer = 0;

	while (s[lengthstr] != '\0')
		lengthstr++;

	while (a < lengthstr && d == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			integer = s[a] - '0';
			if (b % 2)
				integer = -integer;
			c = c * 10 + integer;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}

	if (d == 0)
		return (0);

	return (c);
}
