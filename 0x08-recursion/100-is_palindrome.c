#include "main.h"

int check_palindrome(char *s, int a, int length);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: string to count its length
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string to calculate its length
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - checks the characters recursively for palindrome
 *
 * @s: string to check
 *
 * @a: iterator
 *
 * @length: length of the string to be calculated
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *s, int a, int length)
{
	if (*(s + a) != *(s + length - 1))
		return (0);
	if (a >= length)
		return (1);
	return (check_palindrome(s, a + 1, length - 1));
}
