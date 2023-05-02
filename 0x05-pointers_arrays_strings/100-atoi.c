#include "main.h"
/**
 * _atoi - converts a string to an integer.
 *
 * @s: the string to be  converted
 *
 * Return: the converted integer from a string
 */
int _atoi(char *s)
{
	int sign = 1;
	int answer = 0;
	int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] == '-')
			sign *= -1;
		else if (s[a] >= '0' && s[a] <= '9')
			answer = (answer * 10) + (s[a] - '0');
		else if (answer > 0)
		break;
	a++;
	}

	return (answer * sign);
}
