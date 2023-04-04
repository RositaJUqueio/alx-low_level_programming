/* Auth: Rosita J Uqueio */

#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list.
 * @head: pointer to list_t
 */

void free_list(list_t *head)
{
	list_t *here;

	while(head != NULL)
	{
		here = head->next;
		free(head->str);
		free(head);
		head = here;
	}
}
