#include "main.h"
#include <stdio.h>

/**
 *_strchr - Fucntiont that takes both string and charater as input
 *@s: string
 *@c:character
 *Return: Null
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	{
	return (s);
	}
	s++;
	}
	if (*s == c)
	{
	return (s);
	}
	return (NULL);
}
