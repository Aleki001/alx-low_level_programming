#include "lists.h"
/**
 * print_dlistint - print all the elements of a list
 * @h:    points head
 * Return: no of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
