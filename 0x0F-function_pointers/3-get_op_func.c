#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - Selects the correct function to perform the operation
 *
 * @s: The operator passed as an argument
 *
 * Return: A pointer to the corresponding function, or NULL if not found
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int a = 0;

	while (ops[a].op != NULL && *(ops[a].op) != *s)
		a++;

	return (ops[a].f);
}
