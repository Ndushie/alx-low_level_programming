#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * putchar - prints all alphabets except q and e
 */
int main(void)
{
	char n = 'a'

	;while (n <= 'z')
	{
		if (n != 'q' && n != 'e')
		{
			putchar(n);
		}
		n++;
	}
	putchar('\n');

	return (0);
}
