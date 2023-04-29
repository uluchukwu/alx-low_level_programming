#include "main.h"

/**
 *_strcmp - function which takes two strings as input
 *	and compares them character by character until a difference is found
 *@s1: string to be compared
 *@s2: string to be compared
 *Return: s1 - s2.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
