#include "main.h"
#include <stdio.h>
/**
 * rot13 - replaces a letter with the 13th letter after it.
 *
 * @string: the string to be encoded.
 *
 * Return: pointer to the resulting encoded string.
 */
char *rot13(char *string)
{
	int x;
	int y;
	char alphabet1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alphabet2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; string[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (string[x] == alphabet1[y])
			{
				string[x] = alphabet2[y];
				break;
			}
		}
	}
	return (string);
}
