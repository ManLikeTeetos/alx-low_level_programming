#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node
 * @head: double pointer to list_t
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if empty
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *next;
	unsigned int len = 0;

	while (str[len])
		len++;

	next = malloc(sizeof(list_t));
	if (!next)
		return (NULL);

	next->str = strdup(str);
	next->len = len;
	next->next = (*head);
	(*head) = next;

	return (*head);
}
