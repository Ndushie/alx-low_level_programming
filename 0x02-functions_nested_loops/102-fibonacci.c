#include <stdio.h>
/**
 * main - Prints the first 50 fibonacci numbers
 *
 * Return: 0
 */
int main(void)

{
	 int a = 1, b = 2, c, count;

	 printf("%d, %d", a, b);

	 for (count =3; count <= 50; count++)
	 {
		 c = a +b;
		 printf(", %d", c);
		 a = b;
		 b = c;
	 }
	 printf("\n");
	 return (0);
}
