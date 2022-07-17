#include <stdio.h>
#include "main.h"
/**
 * get_endianness - function that retunrs the endian of the processo
 * Return: returns 1 for little and 0 for big
 */

int get_endianness(void)
{
	unsigned int i;
	return ((int) (((char *)&i)[0]));
}
