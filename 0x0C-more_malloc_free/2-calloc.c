#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc.
 *
 * @nmemb: Number of elements in the array.
 * @size: Byte size of array elements.
 *
 * Return: If nmemb == 0, size == 0, or an error occurs - NULL.
 *         Otherwise - pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
	return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	return (NULL);

	for (i = 0; i < nmemb * size; i++)
	ptr[i] = 0;

	return (ptr);
}
