#include "main.h"

/**
 * _islower - function that checks ifa character is lowercase
 *@c: the charcter argument
 *Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	return (0);
}
