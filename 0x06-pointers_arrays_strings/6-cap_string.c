#include "main.h"
#include <ctype.h>
/**
 * cap_string - Capitalizes all words of a string.
 *
 * @string: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *string)
{
	int a = 0;
	int uppercase = 1;

	while (string[a] != '\0')
	{
		if (string[a] == ' ' || string[a] == '\t' || string[a] == '\n' ||
		    string[a] == ',' || string[a] == ';' || string[a] == '.' ||
		    string[a] == '!' || string[a] == '?' || string[a] == '"' ||
		    string[a] == '(' || string[a] == ')' || string[a] == '{' ||
		    string[a] == '}')
		{
			uppercase = 1;
		}
		else if (uppercase && islower(string[a]))
		{
			string[a] = toupper(string[a]);
			uppercase = 0;
		}
		else
		{
			uppercase = 0;
		}

		a++;
	}
	return (string);
}
