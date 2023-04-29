#include "main.h"

/**
 *_isdigit - function, which takes an integer as input.
 *@c: Digit character
 *Return: 1 if it's a digit character (0-9), and 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
