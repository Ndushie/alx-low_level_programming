#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a = 0, b = 1, c;

	while (b != 420196140727489673)
	{
		printf("%ld", b);
		if (b != 420196140727489673)
		{
			printf(", ");
		}
		c = a + b;
		a = b;
		b = c;
	}
	printf("%ld", b);
	return (0);
}
