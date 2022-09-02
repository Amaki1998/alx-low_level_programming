#include "lists.h"
/**
 * add_dnodeint_end - Add a node in the tail
 * @head: Pointer to direction of the head
 * @n: The data integer
 * Return: The direction of the tail node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last_dir;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	last_dir = *head;

	while (last_dir->next != NULL)
		last_dir = last_dir->next;
	last_dir->next = new;
	new->prev = last_dir;

	return (new);
}
