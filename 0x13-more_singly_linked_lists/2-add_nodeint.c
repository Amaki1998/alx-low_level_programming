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

	link = malloc(sizeof(listint_t));

	link->next = *head;

	link->n = n;

	*head = link;

	return (link);
}
