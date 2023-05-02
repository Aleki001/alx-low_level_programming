#include "lists.h"
/**
 *free_listint2 - frees a list
 *@head: pointer to header pointer
 *Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node;


	if (*head == 0)
		return;
	while (*head != 0)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
	}
}
