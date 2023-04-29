#include "main.h"

/**
 *_strcat - Function that takes two character arrays as input
 *@dest: destination string
 *@src: source string
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0;

	while (*(dest + dest_len) != '\0')
	{
	dest_len++;
	}
	int i = 0;

	while (*(src + i) != '\0')
	{
	*(dest + dest_len + i) = *(src + i);
	i++;
	}
	*(dest + dest_len + i) = '\0';
	return (dest);
}
