/* Auth: Rosita J Uqueio */

#include "lists.h"
#include <string.h>

/**
 * add_node -  adds a new node at the
 *  beginning of a list_t list.
 * @head: pointer to first node.
 * @str: string to be added to list_t
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *added;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	added = strdup(string);
	if (added == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; string[len];)
		len++;

	new->string = added;
	new->len = len;
	new->next = *head;

	head = new;

	return (new);

}
