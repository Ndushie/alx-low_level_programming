#include <stdio.h>
#include "main.h"
/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int c = 0;
	long a = 1, b = 2;

	while (c < 50)
	{
		if (d == 0)
			printf("%ld", a);
		else if (d == 1)
			printf(", %ld" b);
		else
		{
			b += a;
			a = b - a;
			printf(", %ld", b);
		}
		++c;
	}
	printf("\n");
	return (0);
}
