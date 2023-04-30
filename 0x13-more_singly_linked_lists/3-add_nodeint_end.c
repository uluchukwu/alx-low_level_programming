#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Double pointer to the head of the list.
 * @n: Integer to add to the list.
 *
 * Return: Address to the new node else NULL if error.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *end_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
	*head = new_node;
	}
	else
	{
	end_node = *head;
	while (end_node->next)
	end_node = end_node->next;
	end_node->next = new_node;
	}

	return (*head);
}
