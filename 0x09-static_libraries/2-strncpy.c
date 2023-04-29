#include "main.h"

/**
 *_strncpy - Function that takes both dest. and src string and,
 * also the max number od character to copy
 *@dest: destination string
 *@src: source string
 *@n: maximumnumber of character
 *Return:dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(src + i) != '\0')
	{
	*(dest + i) = *(src + i);
	i++;
	}
	while (i < n)
	{
	*(dest + i) = '\0';
	i++;
	}
	return (dest);
}
