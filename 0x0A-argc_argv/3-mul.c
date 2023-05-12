#include <stdio.h>
#include <stdlib.h>

/**
 * mul - multiplies two integers
 *
 * @x: first integer
 *
 * @y: second integer
 *
 * Return: the result of the multiplication
 */
int mul(int x, int y)
{
	return (x * y);
}
/**
 * main - multiplies two integers
 *
 * @argc: number of arguments
 *
 * @argv: array of arguments
 *
 * Return: 0 if successful, 1 if the program does not receive two arguments
 */
int main(int argc, char *argv[])
{
	int no1, no2, answer;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	no1 = atoi(argv[1]);
	no2 = atoi(argv[2]);
	answer = mul(no1, no2);
	printf("%d\n", answer);

	return (0);
}
