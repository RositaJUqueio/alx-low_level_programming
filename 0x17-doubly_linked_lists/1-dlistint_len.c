#include "lists.h"

/**
 * dlistint_len - eturns the number of elements
 *  in a linked dlistint_t list.
 * @h: pinter to head of dlistint_t
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
