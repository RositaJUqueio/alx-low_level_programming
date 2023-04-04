#ifndef LISTS_H
#define LISTS_H

/* headers ill be using */
#include <stdio.h>
#include <stdlib.h>

/**
 * struct list - singly linked list
 * @string: string
 * @len: length of string
 * @next: points to next node.
 */

typedef struct list
{
	char *string;
	unsigned int len;
	struct list *next;
} list_t;

/* function prototypes */
int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
void free_list(list_t *head);

#endif /*LISTS_H */
