#include <stdlib.h>
#include "main.h"
/**
 * argstostr - Concatenates all the arguments of the program.
 *
 * @ac: The number of arguments.
 *
 * @av: An array of strings containing the arguments.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	int a, b, c, length;
	char *concatenatedstr;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the concatenated string */
	length = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			length++;
		length++; /* Account for the newline character */
	}
	/* Allocate memory for the concatenated string */
	concatenatedstr = malloc((length + 1) * sizeof(char));
	if (concatenatedstr == NULL)
		return (NULL);
		/* Copy the arguments to the concatenated string */
	c = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			concatenatedstr[c] = av[a][b];
			c++;
		}
		concatenatedstr[c] = '\n';
		c++;
	}
	concatenatedstr[c] = '\0';

	return (concatenatedstr);
}
