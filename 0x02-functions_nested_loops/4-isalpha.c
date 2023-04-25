#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *
 * Description: does the above
 *
 *Return: 1 if c is a letter 0 otherwise
 *
 * @c: The character to be checked
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
