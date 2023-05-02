#include "lists.h"
/**
  *add_nodeint_end - adds node at end of a list
  *@head: head pointer
  *@n: data to be inserted in a node
  *Return: address of newnode
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *temp;

	node = malloc(sizeof(listint_t));

	if (!node)
	{
		return (NULL);
	}
	node->n = n;
	node->next = 0;
	if (*head == 0)
	{
		*head = node;
		return (node);
	}
	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = node;
	return (node);
}
