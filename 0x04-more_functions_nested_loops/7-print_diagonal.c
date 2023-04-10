#include "main.h"

/**
 * print_diagonal - A function that print a diagonal line
 * @n: Takes in argument
 * Return: Void
 */

void print_diagonal(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		int j = 0;

	while (j < i)
	{
		_putchar('\0');
		j++;
	}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
	_putchar('\n');

}
