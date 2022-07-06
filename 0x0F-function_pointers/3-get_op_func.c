#include "3-calc.h"
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
	int x = 0;

	while (ops[x].op != NULL)
	{
		if (*s == *(ops[x].op) && s[1] == 0)
			return (ops[x].f);
	}
	printf("Error\n");
	exit(99);
}
