#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *add_node_end - adds node to end of list
 *@head: head pointer
 *@str: string
 *Return: address or null if otherwise
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nn, *ln;

	nn = malloc(sizeof(list_t));
	if (nn == NULL)
		return (NULL);
	nn->str = strdup(str);
	if (nn->str == NULL)
	{
		free(nn);
		return (NULL);
	}

	nn->len = strlen(str);
	nn->next = NULL;

	ln = *head;
	if (ln != NULL)
	{
		while (ln->next != NULL)
			ln = ln->next;
	}

	if (ln != NULL)
		ln->next = nn;
	else
		*head = nn;

	return (nn);
}
