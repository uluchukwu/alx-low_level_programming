#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Double pointer to the head of the list.
 *
 * Return: The head node's data (n). Else 0 if list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *first;
	int n;

	if (!head || !(*head))
	return (0);

	first = *head;
	n = first->n;
	*head = first->next;

	free(first);

	return (n);
}
