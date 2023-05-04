#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 *
 * @string: the string to convert
 *
 * Return: A pointer to the resulting string
 */
char *string_toupper(char *string)
{
	int a = 0;

	while (string[a] != '\0')
	{
		if (string[a] >= 'a' && string[a] <= 'z')
		{
			string[a] = string[a] - 32;
		}
		a++;
	}

	return (string);

}
