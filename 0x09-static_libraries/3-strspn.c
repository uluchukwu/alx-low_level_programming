#include "main.h"

/**
 *_strspn - Function that takes two input s and accept as inpput
 *@s: string
 *@accept: string
 *Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
	char *p = accept;

	while (*p != '\0' && *p != *s)
	{
	p++;
	}
	if (*p == '\0')
	{
	return (count);
	}
	count++;
	s++;
	}
	return (count);
}
