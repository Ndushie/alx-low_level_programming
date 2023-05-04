#include "main.h"
/**
 * leet - Encodes a string into 1337.
 *
 * @string: The string to encode.
 *
 * Return: A pointer to the resulting string.
 */
char *leet(char *string)
{
	char *alphabet = "aeotlAEOTL";
	char *leet_codes = "4307143071";
	int a, b;

	for (a = 0; string[a] != '\0'; a++)
	{
		for (b = 0; alphabet[b] != '\0'; b++)
		{
			if (string[a] == alphabet[b])
			{
				string[a] = leet_codes[b];
				break;
			}
		}
	}
	return (string);
}
