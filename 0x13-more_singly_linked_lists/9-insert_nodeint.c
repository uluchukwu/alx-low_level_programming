#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: double pointer to the first head node in the list
 * @idx: index of listint_l where new node will insert
 * @n: value for new node
 *
 * Return: pointer to address the new node Else NULL if error
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node;
	listint_t *current, *prev, *new;

	if (head == NULL)
	return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);
	new->n = n;

	if (idx == 0)
	{
	new->next = *head;
	*head = new;
	return (new);
	}

	current = *head;
	prev = NULL;
	for (node = 0; node < idx && current != NULL; node++)
	{
	prev = current;
	current = current->next;
	}

	if (prev == NULL)
	{
	free(new);
	return (NULL);
	}

	new->next = current;
	prev->next = new;

	return (new);
}
