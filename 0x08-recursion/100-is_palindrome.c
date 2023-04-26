#include "main.h"

/**
 * is_palindrome - a function that returns 1
 * if a string is a palindrome and 0 if not
 * @s: parameter that accepts string values
 * Return: 1
 */

int is_palindrome(char *s)
{

	int len = strlen();
	int i, j;


	for (i = 0, j = len - 1; i < j; i++, j--)
	{
	if (s[i] != s[j])
	{
	return (0);
	}
	}

	return (1);
}
