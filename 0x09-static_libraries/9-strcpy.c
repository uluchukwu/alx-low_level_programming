#include "main.h"

/**
 *_strcpy - Fucnction that copies a string from src to dest
 *@dest: location where the strinng is copied to
 *@src: location where the string is copied from
 *Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
	*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
