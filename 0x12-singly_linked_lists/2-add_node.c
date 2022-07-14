#include <stdlib.h>
#include "lists.h"

/**
 * add_node - function that  with two arguments
 * @head: double pointer to linked list
 * @str: string pointer
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *j;

	j = malloc(sizeof(list_t));
	if (j == NULL)
		return (NULL);
	j->str = _strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		;
	j->len = i;
	j->next = *head;
	*head = j;
	return (j);
}

/**
 * *_strdup - function with one argument
 * @str: string argument
 *
 * Description: returns a pointer to allocated space in memory
 * Return: pointer
 */
char *_strdup(const char *str)
{
	int i, j;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
		;
	ptr = malloc(sizeof(char) * i + 1);

	if (ptr == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
	{
		ptr[j] = str[j];
	}
	ptr[j] = '\0';
	return (ptr);
}
