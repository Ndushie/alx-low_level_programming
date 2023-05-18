#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a non-digit char
 *
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}
/**
 * _strlen - returns the length of a string
 *
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int length1, length2, length, x, carry, digit1, digit2, *answer, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	length1 = _strlen(s1);
	length2 = _strlen(s2);
	length = length1 + length2 + 1;
	answer = malloc(sizeof(int) * length);
	if (!answer)
		return (1);
	for (x = 0; x <= length1 + length2; x++)
		answer[x] = 0;
	for (length1 = length1 - 1; length1 >= 0; length1--)
	{
		digit1 = s1[length1] - '0';
		carry = 0;
		for (length2 = _strlen(s2) - 1; length2 >= 0; length2--)
		{
			digit2 = s2[length2] - '0';
			carry += answer[length1 + length2 + 1] + (digit1 * digit2);
			answer[length1 + length2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			answer[length1 + length2 + 1] += carry;
	}
	for (x = 0; x < length - 1; x++)
	{
		if (answer[x])
			a = 1;
		if (a)
			_putchar(answer[x] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(answer);
	return (0);
}
