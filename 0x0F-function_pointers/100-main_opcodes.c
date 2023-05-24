#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int bytes_number, a;
	unsigned char *main_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	bytes_number = atoi(argv[1]);

	if (bytes_number < 0)
	{
		printf("Error\n");
		return (2);
	}

	main_ptr = (unsigned char *)main;

	for (a = 0; a < bytes_number; a++)
	{
		printf("%02x", *(main_ptr + a));
		if (a < bytes_number - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
