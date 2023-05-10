#include "main.h"
int real_prime_number(int n, int a);

/**
 * is_prime_number - prints if an integer is a prime number or not
 *
 * @n: number to check
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime_number(n, n - 1));
}

/**
 * real_prime_number - computes if a number is prime recursively
 *
 * @n: number to check
 *
 * @a: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int real_prime_number(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (real_prime_number(n, a - 1));
}
