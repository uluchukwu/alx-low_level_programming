#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * It will use n bytes from src.
 * src does not need to be null terminated if it contains n or more bytes
 * @dest: the pointer that is concatenated
 * @src: point that will be appended to @dest
 * @n: maximum number of characters
 * Return: dest.
 */


char *_strncat(char *dest, char *src, int n)
{
	int sop = 0;
	int ulu = 0;

	while (dest[sop] != '\0')
	{
		sop++;
	}
	while (ulu < n && src[ulu] != '\0')
	{
		sop++;
		ulu++;
	}
	dest[sop] = '\0';
	return (dest);
}
