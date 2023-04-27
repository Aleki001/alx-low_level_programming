#include <stdio.h>
#include "lists.h"
/**
 *print_list - prints elements of a list
 *@h: list
 *Return: no of nodes in the list
 */
size_t print_list(const list_t *h)
{
	const list_t *nd;
	size_t count = 0;

	for (nd = h; nd != NULL; nd = nd->next)
	{
		if (nd->str != NULL)
		{
			printf("[%d] %s\n", nd->len, nd->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}

		count++;
	}

	return (count);
}
