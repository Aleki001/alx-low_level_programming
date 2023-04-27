#include <stdio.h>
#include "lists.h"
/**
 *list_len - no of elements in linked list
 *@h: pointer head
 *Return: no of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *nd;

	for (nd = h; nd != NULL; nd = nd->next)
		count++;
	return (count);
}
