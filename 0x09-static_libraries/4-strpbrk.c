#include "main.h"
#include <stdio.h>
/**
 *_strpbrk - function which takes a string s and a string accept as input
 *@s: string taken as an input
 *@accept: string taken as an input
 *Return: s or Null
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
	char *p = accept;

	while (*p != '\0')
	{
	if (*p == *s)
	{
	return (s);
	}
	p++;
	}
	s++;
	}
	return (NULL);
}
