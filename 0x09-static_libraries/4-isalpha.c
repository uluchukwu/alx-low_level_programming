#include "main.h"

/**
 *_isalpha - function which takes a character c as input
 *@c: charcter
 *Return: returns 1 if it is a letter and 0 otherwise
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	return (0);
}
