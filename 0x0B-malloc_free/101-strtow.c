#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * count_words - Counts the number of words in a string.
 *
 * @str: The string to count words from.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int count_no_words = 0;
	int a;

	for (a = 0; str[a]; a++)
	{
		if (str[a] != ' ' && (str[a + 1] == ' ' || str[a + 1] == '\0'))
			count_no_words++;
	}

	return (count_no_words);
}
/**
 * split_string - Splits a string into words.
 *
 * @str: The string to split.
 *
 * @words: An array to store the words.
 *
 * @word_count: The number of words.
 *
 * Return: 1 on success, 0 on failure.
 */
int split_string(char *str, char **words, int word_count)
{
	int a;
	char *token;

	for (a = 0; a < word_count; a++)
	{
		while (*str == ' ')
			str++;

		token = strtok(str, " ");
		if (token == NULL)
			return (0);

		words[a] = strdup(token);
		if (words[a] == NULL)
			return (0);

		str = NULL;
	}

	return (1);
}
/**
 * strtow - Splits a string into words.
 *
 * @str: The string to be split.
 *
 * Return: Pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	char **words;
	int word_count;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	if (!split_string(str, words, word_count))
	{
		while (word_count > 0)
			free(words[--word_count]);
		free(words);
		return (NULL);
	}

	words[word_count] = NULL;
	return (words);
}
