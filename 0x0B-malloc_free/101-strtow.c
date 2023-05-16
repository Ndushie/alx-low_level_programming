#include <stdlib.h>
#include "main.h"
/**
 * count_word - counts the number of words in a string
 *
 * @s: string to counts its words
 *
 * Return: number of words in string s
 */
int count_word(char *s)
{
	int a, c, word_count;

	a = 0;
	word_count = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			a = 0;
		else if (a == 0)
		{
			a = 1;
			word_count++;
		}
	}

	return (word_count);
}
/**
 * **strtow - splits a string into words
 *
 * @str: string to split into words
 *
 * Return: pointer to an array of strings(words),Success
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **array, *p;
	int y, x = 0, length = 0, words, c = 0, begin, finish;

	while (*(str + length))
		length++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	array = (char **) malloc(sizeof(char *) * (words + 1));
	if (array == NULL)
		return (NULL);

	for (y = 0; y <= length; y++)
	{
		if (str[y] == ' ' || str[y] == '\0')
		{
			if (c)
			{
				finish = y;
				p = (char *) malloc(sizeof(char) * (c + 1));
				if (p == NULL)
					return (NULL);
				while (begin < finish)
					*p++ = str[begin++];
				*p = '\0';
				array[x] = p - c;
				x++;
				c = 0;
			}
		}
		else if (c++ == 0)
			begin = y;
	}

	array[x] = NULL;

	return (array);
}
