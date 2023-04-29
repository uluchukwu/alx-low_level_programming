#include "main.h"

/**
 *_strncat - Function that takes two arrays as input
 *@dest: destination string
 *@src: Source string
 *@n: maiximum number of characters to concatenate
 *Return:dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;

	while (*(dest + dest_len) != '\0')
	{
	dest_len++;
	}

	int i = 0;

	while (*(src + i) != '\0' && i < n)
	{
	*(dest + dest_len + i) = *(src + i);
	i++;
	}
	*(dest + dest_len + i) = '\0';
	return (dest);
}
