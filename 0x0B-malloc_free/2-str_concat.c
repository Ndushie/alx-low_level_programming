#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - Concatenates two strings.
 *
 * @s1: The first string.
 *
 * @s2: The second string.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	size_t length1;
	size_t length2;
	char *concatenated_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	length1 = strlen(s1);
	length2 = strlen(s2);

	concatenated_str = malloc((length1 + length2 + 1) * sizeof(char));

	if (concatenated_str == NULL)
		return NULL;

	strcpy(concatenated_str, s1);
	strcat(concatenated_str, s2);

	return (concatenated_str);
}
