#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * Putchar - prints all possible combinations of two two digits
 */
int main(void)
{
	int c, d;

	for (c = 0; c <= 99; c++)
	{
		for (d = c; d <= 99; d++)
		{
			if (c != d)
			{
				putchar(c / 10 + '0');
				putchar(c % 10 + '0');
				putchar(' ');
				putchar(d / 10 + '0');
				putchar(d % 10 + '0');
				if (c != 98 || d != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
