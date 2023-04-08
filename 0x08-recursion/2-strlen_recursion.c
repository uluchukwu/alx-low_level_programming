#include "main.h"

/**
 * _strlen_recursion - A function that returns the length of a string
 * @s: Takes a character arguement
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	while (*s != '\n')
	{
		length++;
		s++;
	}
	return (length);
}
