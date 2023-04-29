#include "main.h"

/**
 *_puts - function which takes a string s as input
 * and outputs it to the console
 *@s: Strings
 *Return: void
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
	_putchar(*s);
	s++;
	}
	_putchar('\n');
}
