#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: string to copy
 *
 * Return: null if insufficient memory or str == null
 * a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	size_t len;
	char *copy;

	if (str == NULL)
	return (NULL);

	len = strlen(str) + 1;
	copy = malloc(len * sizeof(char));

	if (copy == NULL)
	return (NULL);

	return (strcpy(copy, str));
}
