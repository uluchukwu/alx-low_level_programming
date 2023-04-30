#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the start head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0, pos = 0;
	const listint_t *node, **list = NULL;

	if (head == NULL)
	return (0);

	while (head != NULL)
	{
	node = head;

	for (i = 0; i < num; i++)
	{
	if (node == list[i])
	{
	printf("-> [%p] %d\n", (void *)node, node->n);
	free(list);
	return (num);
	}
	}

	if (pos == num)
	{
	list = realloc(list, (num + 1) * sizeof(listint_t *));
	if (list == NULL)
	{
	free(list);
	exit(98);
	}
	list[pos++] = node;
	num++;
	}
	else
	list[pos++] = node;

	printf("[%p] %d\n", (void *)node, node->n);
	head = head->next;
	}

	free(list);
	return (num);
}
