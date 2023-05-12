#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments received, one argument per line
 *
 * @argc: the number of arguments passed to the program
 *
 * @argv: an array of strings containing the arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
