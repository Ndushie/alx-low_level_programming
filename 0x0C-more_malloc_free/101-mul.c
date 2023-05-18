#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * is_number - checks if a string is a number
 *
 * @str: string to check
 *
 * Return: 1 if str is a number, 0 otherwise
 */
int is_number(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		if (!isdigit(str[i]))
			return (0);

	return (1);
}
/**
 * main - multiplies two positive numbers
 *
 * @argc: number of arguments
 *
 * @argv: array of arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, answer;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_number(argv[1]) || !is_number(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	answer = num1 * num2;

	printf("%d\n", answer);

	return (0);
}
