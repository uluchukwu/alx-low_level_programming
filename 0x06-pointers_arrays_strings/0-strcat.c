#include "main.h"
/**
 *_strcat - function that concatenates two strings pointed to
 *	by @src, to the end of the string pointed to by @dest
 *	then terminating with a null byt at the end.
 *@dest: a pointer to the string which will  be concatenated upo
 *@src: a pointer which is appended to @dest.
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
