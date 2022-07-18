#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - function that prints linked list
 * @head: head node
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	int length = 0, x = 0;
	const listint_t *tmp[100];

	if (!head)
		exit(98);

	while (head)
	{
		while (x < length)
		{
			if (tmp[i] == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (length);
			}
			x++;
		}
		printf("[%p] %d\n", (void *)head, head->n);
		tmp[length] = head;
		length++;
		head = head->next;
	}
	return (length);
}
