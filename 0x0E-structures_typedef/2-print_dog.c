#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - function prints a struct dog 
 * @d: dog pointer.
 *
 */
void print_dog(struct dog *d)
{
	if (d == 0)
		printf("\n");
	if (d->name == 0)
		printf("(nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == 0)
		printf("(nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
