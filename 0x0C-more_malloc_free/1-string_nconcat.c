#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - Concatenates two strings.
 *
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of characters from s2 to concatenate.
 *
 * Return: Pointer to the newly allocated memory containing
 *the concatenated string,or NULL if allocation fails.
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_length;
	unsigned int s2_length;
	unsigned int new_length;
	char *new_string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_length = strlen(s1);
	s2_length = strlen(s2);

	if (n >= s2_length)
		n = s2_length;

	new_length = s1_length + n;
	new_string = malloc(sizeof(char) * (new_length + 1));

	if (new_string == NULL)
		return (NULL);

	strncpy(new_string, s1, s1_length);
	strncpy(new_string + s1_length, s2, n);
	new_string[new_length] = '\0';

	return (new_string);
}
