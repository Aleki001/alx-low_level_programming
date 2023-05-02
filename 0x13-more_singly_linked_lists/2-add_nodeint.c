#include "lists.h"
/**
 *add_nodeint - adds new node at beginning of list
 *@head: head pointer
 *@n: node data to be inserted
 *Return: address of new element otherwise NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (!head)
	{
		return (NULL);
	}
	node = malloc(sizeof(listint_t));
	if (!node)
	{
		return (NULL);
	}

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
