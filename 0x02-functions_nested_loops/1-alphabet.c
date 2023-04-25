#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Description: This function prints all the lowercase letters of the alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
