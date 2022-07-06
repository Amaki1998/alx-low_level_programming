#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - select the correct operation fxn
 * @s: operator
 * Return: returns function pointer
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
	int x;

	for (x = 0; x < 5; x++)
	{
		if (ops[x].op[0] == s[0])
			return (ops[x].f);
	}
	return (NULL);
}
