#include <stdio.h>
#include <math.h>
/**
 * main - Prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long a, maxfactor;
	long number = 612852475143;
	double square = sqrt(number);

	for (a = 1; a <= square; a++)
	{
		if (number % a == 0)
		{
			maxfactor = number / a;
		}
	}
	printf("%ld\n", maxfactor);
	return (0);
}
