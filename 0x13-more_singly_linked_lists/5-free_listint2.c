#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: Double pointer to the head of the list.
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
	return;

	while (*head)
	{
	temp = (*head)->next;
	free(*head);
	*head = temp;
	}
	*head = NULL;
}
