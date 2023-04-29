#include "main.h"

/**
 * _isupper -  function in C, which takes an integer as input
 * and returns 1 if it's an uppercase character, and 0 otherwise.
 * Return: 1 on uppercase & 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);

	}
}
