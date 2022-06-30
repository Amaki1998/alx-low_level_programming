#include "main.h"
#include <stdlib.h>
#
/**
 * malloc_checked -  function that allocates memory using malloc
 * @b: unsigned integer
 * Return: returns a pointer to the allocated memory or 98
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == 0)
		exit(98);
	return (i);
}

