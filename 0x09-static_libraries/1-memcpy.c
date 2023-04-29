#include "main.h"

/**
 *_memcpy - Function that takes destination array,
 *	source array and number of bytes as inputs.
 *@dest: destination array
 *@src: source array
 *@n: number of bytes
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
	*(dest + i) = *(src + i);
	}
	return (dest);
}
