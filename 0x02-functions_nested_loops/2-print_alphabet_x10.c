#include "main.h"
/**
 * print_alphabet_x10 - prints the alphbet 10 times
 *
 * Description: It will print tha aplphabet 10 times
 *
 */
void print_alphabet_x10(void)
{
	char n = 'a';
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 26; b++)
		{
			_putchar(n);
			n++;
		}
		n = 'a';
		_putchar('\n');
	}
}
