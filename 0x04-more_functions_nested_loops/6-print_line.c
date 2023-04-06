#include <stdio.h>
/**
 * print_line - A  function that prints a line on the terminal
 *
 * @n: integer that takes an arguement
 * Return: Void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
		return;
	}
	while (n > 0)
	{
		putchar('_');
		n--;
	}
	putchar('\n');
}
