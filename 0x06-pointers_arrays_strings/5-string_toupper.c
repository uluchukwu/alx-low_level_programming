#include "main.h"
/**
 *string_toupper - a function that changes all lowercase
 *letters of a string to uppercase.
 *@str: character string
 *Return: str
 */

char *string_toupper(char *str)
{
	int sop = 0;

	while (str[sop] != '\0')
	{
	if  (str[sop] >= 'a' && str[sop] <= 'z')
	{
	str[sop] = str[sop] - 32;
	}
	sop++;
	}
	return (str);
}
