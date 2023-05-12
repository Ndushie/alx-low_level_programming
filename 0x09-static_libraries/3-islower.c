#include "main.h"
/**
 *  _islower - Returns 1 if c is lowercase and returns 0 otherwise
 *
 * @c: The character to be checked
 *
 *Return: 1 for lowercase and 0 for others
 *
 * Description: does as shown above
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
