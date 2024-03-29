#include "lists.h"

/**
 * print_dlistint - prints all elements
 * of a dlistint_t list
 * @h: pointer to head of dlistint_t
 *
 * Return: number od nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
