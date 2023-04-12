#include "main.h"

/**
 * _strncpy - a fucntion that coppies a string
 *@dest:the pointer that gets concatenated
 *@src: The pointer that gets appended to @dest.
 *@n: the maximum number of characters
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;


	while (i < n && src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}
