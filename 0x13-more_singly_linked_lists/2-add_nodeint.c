#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * Return: returns the address of the new element
 * @head: head node
 * @n: new node data
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *link;

	if (!head)
		return (0);
	node = malloc(sizeof(listint_t));
	if (!link)
		return (0);
	link->n = n;
	link->next = *head;
	*head = link;
	return (link);
}
