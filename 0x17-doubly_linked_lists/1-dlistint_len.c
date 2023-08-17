#include "lists.h"
/**
 * dlistint_len - count the number of nodes
 * @h: pointer to the beginning of a list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
		h = h->next;
	return (x);
}
