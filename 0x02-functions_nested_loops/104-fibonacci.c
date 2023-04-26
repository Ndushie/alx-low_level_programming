#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long long int a = 0, b = 1, c;

	while (b != 420196140727489673)
	{
		printf("%llu", b);
		if (b != 420196140727489673)
		{
			printf(", ");
		}
		c = a + b;
		a = b;
		b = c;
	}
	printf("%llu", b);
	return (0);
}
