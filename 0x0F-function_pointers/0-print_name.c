#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: character
 * @f: function
 * Return: a void function no return
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	(*f)(name);
}
