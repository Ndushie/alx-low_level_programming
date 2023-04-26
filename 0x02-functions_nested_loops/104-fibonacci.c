#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long fib1 = 1, fib2 = 2, sum;
	unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
	unsigned long half1, half2;

	printf("%lu, %lu, ", fib1, fib2);
	for (count = 0; count < 90; count++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);
		fib1 = fib2;
		fib2 = sum;
	}
	fib1_half1 = fib1 / 10000000000;
	fib2_half1 = fib2 / 10000000000;
	fib1_half2 = fib1 % 10000000000;
	fib2_half2 = fib2 % 10000000000;
	for (count = 91; count < 98; count++)
	{
		half1 = fib1_half1 + fib2_half1;
		half2 = fib1_half2 + fib2_half2;
		if (half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 1000000000;
		}
		printf("%lu%010lu", half1, half2);
		if (count != 97)
		{
			printf(", ");
		}
			fib1_half1 = fib2_half1;
			fib1_half2 = fib2_half2;
			fib2_half1 = half1;
			fib2_half1 = half2;
	}
	printf("\n");
	return (0);
}
