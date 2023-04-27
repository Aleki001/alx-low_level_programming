#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *free_list - frees spaces allocated for linked list
 *@head: head pointer
 *Return: void
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
}
