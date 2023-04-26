#include "main.h"

/**
 * _memcpy - function that copies n byte from
 * a source memomory area to a destinaion memory area.
 * @src: The memory area where n byte is copied  from
 * @dest:The memory area where n byte is copied to.
 * @n: the size of the memory area.
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pDest = (char *) dest;
	char *pSrc = (char *) src;

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		pDest[i] = pSrc[i];
	}

	return (dest);
}

