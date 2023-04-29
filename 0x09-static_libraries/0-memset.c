#include "main.h"
/**
 * _memset - A function that takes a character array  and n byte as input
 * @s: pointer to the character array
 * @b: character array
 * @n: number of bytes
 * Return:s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
	*(s + i) = b;
	}
	return (s);
}
