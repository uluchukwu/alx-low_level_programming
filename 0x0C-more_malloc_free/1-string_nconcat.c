#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings with a given number of bytes
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to copy into s1
 *
 * Return: Null if error or char pointer to the new joined place in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, i;
	char *x;

	if (s1 == NULL)
	a = 0;
	else
	for (a = 0; s1[a]; a++)
	;

	if (s2 == NULL)
	b = 0;
	else
	for (b = 0; s2[b] && b < n; b++)
	;

	x = malloc(sizeof(*x) * (a + b + 1));
	if (x == NULL)
	return (NULL);

	for (i = 0; i < a + b; i++)
	{
	if (i < a)
	x[i] = s1[i];
	else
	x[i] = s2[i - a];
	}

	x[a + b] = '\0';

	return (x);
}
