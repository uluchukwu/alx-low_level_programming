#include "main.h"

/**
 *_strlen - a function that checks length of a string.
 *@s: string
 *Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
	length++;
	s++;
	}
	return (length);
}
