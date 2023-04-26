#include "main.h"

/**
 *  * *_memset - Fills the first N bytes of the memory
 *          of string S(pointer) with the constant byte of B
 * @s: A pointer to the memory area to be filled.
 * @b: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: string @s, pointer to memory string s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int g;

	for (g = 0; g < n; g++)
	{
	s[g] = b;
	}

	return (s);
}
