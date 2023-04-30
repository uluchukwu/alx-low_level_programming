#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars & initializes it with a specific char
 * @size: size of array to be created
 * @c: char to initialize array with
 *
 * Return: pointer to the array or NULL if malloc fails/if size == 0
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
	return (NULL);
	}

	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < size; ++i)
	{
	*(s + i) = c;
	}

	return (s);
}
