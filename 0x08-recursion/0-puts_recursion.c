#include "main.h"

void _puts_recursion(char *s);

/**
 *_puts_recursion - Prints a string followed by a new line.
 *@s: The string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* Base case: end of string */
	{
	printf("\n");
	return;
	}

	printf("%c", *s); /* Print the current character */
	_puts_recursion(s + 1); /* Recursive call with next character */
}
