#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - add new node to list at end
 * @head: head node
 * @n: node data
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *link, *last;

	if (!head)
		return (0);

	link = malloc(sizeof(listint_t));
	if (!link)
		return (0);
	link->n = n;
	link->next = 0;

	last = *head;
	if (!last)
	{
		*head = link;
		return (link);
	}

	while (last->next)
		last = last->next;
	last->next = link;
	return (link);
}
