#include "main.h"
/**
 *_puts_recursion - A fuction that prints a string
 *@s: the parameter that takes argurment
 *Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
