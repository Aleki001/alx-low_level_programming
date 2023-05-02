#include "lists.h"
/**
 *free_listint - frees memory allocated to a list;
 *@head: header pointer
 *Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != 0)
	{
		node = head;
		head = head->next;
		free(node);
	}

}
