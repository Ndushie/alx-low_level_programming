#include <unistd.h>
#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 *
 * Write - Prints the words written under msg
 */
int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t len = strlen(msg);

	write(2, msg, len);
	return (1);
}
