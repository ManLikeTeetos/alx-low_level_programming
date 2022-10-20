#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a next node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the next node
 *
 * Return: address of the next element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *next;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	next = malloc(sizeof(list_t));
	if (!next)
		return (NULL);

	next->str = strdup(str);
	next->len = len;
	next->next = NULL;

	if (*head == NULL)
	{
		*head = next;
		return (next);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = next;

	return (next);
}
