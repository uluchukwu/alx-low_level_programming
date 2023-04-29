#include "main.h"
#include <stdio.h>
/**
 *_strstr - function which takes a string
 *as input and returns a pointer to the first occurrence
 *@haystack: string taken as input
 *@needle: string  taken as input
 *Return: Null
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
	char *p1 = haystack;
	char *p2 = needle;

	while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
	{
	p1++;
	p2++;
	}
	if (*p2 == '\0')
	{
	return (haystack);
	}
	haystack++;
	}
	return (NULL);
}
