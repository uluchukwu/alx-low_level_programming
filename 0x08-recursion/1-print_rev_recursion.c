#include "main.h"

/**
 * _print_rev_recursion - A function that prints string in reverse
 *@s: Takes character arguements
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
