#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - functio that return sum of all list data
 * @head: head node
 * Return: add
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	if (!head)
		return (add);

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
