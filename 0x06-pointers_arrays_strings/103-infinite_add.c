#include "main.h"

/**
 * rev_string - reverse array order
 *
 * @n: integers
 *
 * Return: Always 0 success
 */

void rev_string(char *n)
{
	int x = 0;
	int y = 0;
	char c;

	while (*(n + x) != '\0')
	{
		x++;
	}
	x--;

	for (y = 0; y < x; y++, x--)
	{
		c = *(n + y);
		*(n + y) = *(n + x);
		*(n + x) = c;
	}
}
#include "main.h"
/**
 * infinite_add - add 2 numbers together
 *
 * @n1: text representation of 1st number to add
 *
 * @n2: text representation of 2nd number to add
 *
 * @r: pointer to buffer
 *
 * @size_r: buffer size
 *
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0, x = 0, y = 0, digits = 0;
	int valn1 = 0, valn2 = 0, total_sum = 0;

	while (*(n1 + x) != '\0')
		x++;
	while (*(n2 + y) != '\0')
		y++;
	x--;
	y--;
	if (y >= size_r || x >= size_r)
		return (0);
	while (y >= 0 || x >= 0 || carry == 1)
	{
		if (x < 0)
			valn1 = 0;
		else
			valn1 = *(n1 + x) - '0';
		if (y < 0)
			valn2 = 0;
		else
			valn2 = *(n2 + y) - '0';
		total_sum = valn1 + valn2 + carry;
		if (total_sum >= 10)
			carry = 1;
		else
			carry = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (total_sum % 10) + '0';
		digits++;
		y--;
		x--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
