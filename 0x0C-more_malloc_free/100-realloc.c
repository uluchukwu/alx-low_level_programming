#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to previously allocated memory block.
 * @old_size: Size in bytes of the allocated space for ptr.
 * @new_size: Size in bytes of the new allocated space.
 * Return: NULL if new_size == 0 and ptr is not NULL.
 *         ptr if new_size == old_size.
 *         Pointer to the newly allocated memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	if (new_size == old_size)
	return (ptr);

	if (ptr == NULL)
	{
	new_ptr = malloc(new_size);
	return (new_ptr);
	}

	if (new_size == 0)
	{
	free(ptr);
	return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	new_ptr[i] = ((char *)ptr)[i];

	free(ptr);

	return (new_ptr);
}
