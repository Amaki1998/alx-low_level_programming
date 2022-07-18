#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that print all elements of lists.
 * Return: returns number of nodes
 * @h: list
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		printf("%d", h->n);
		h = h->next;
		printf("\n");
	}
	return (i);
}
