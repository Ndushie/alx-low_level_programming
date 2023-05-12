#include <stdio.h>
#include <stdlib.h>
/**
 * main - Adds positive numbers
 *
 * @argc: number  of arguments
 *
 * @argv: array of argument
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int a, b, total = 0;

	if (argc < 2)
	{
	printf("0\n");
	return (0);
	}
	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		total += atoi(argv[a]);
	}

	printf("%d\n", total);
	return (0);
}
