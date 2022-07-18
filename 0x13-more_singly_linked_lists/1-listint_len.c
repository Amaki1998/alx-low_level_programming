#include <stdio.h>
#include "lists.h"
/**
 * listint_len - function that gets length of list
 * Return: returns the number of elemnts in a linked list
 * @h: list
 */
size_t listint_len(const listint_t *h)
{
	int length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}
