#include "main.h"
/**
 * reset_to_98 - function that takes a pointer to int and updates
 * @n: integer
 */
void reset_to_98(int *n)
{
	int **p = &n;
	**p = 402;
}
