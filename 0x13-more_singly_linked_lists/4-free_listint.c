#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - function that frees a list
 * @head: head node
 */
void free_listint(listint_t *head)
{
	while (head)
	{
		listint_t *tmp = head;

		head = head->next;
		free(tmp);
	}
}
