#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to the beginning of the list.
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
	temp = head->next;
	free(head);
	head = temp;
	}
}
