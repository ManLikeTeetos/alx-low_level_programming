#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_all - singly linked list
 * @str: string - (malloc string)
 * @len: length of the string
 * @next: pointer to the next node
 */
typedef struct list_all
{
	char *str;
	unsigned int len;
	struct list_all *next;
} list_t;

size_t print_list(const list_t *h);

#endif
