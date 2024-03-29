#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _print - Moves a string one place to the left and prints the string
 * @str: String to move
 * @l: Size of string
 *
 * Return: void
 */
void _print(char *str, int l)
{
	int i, j;

	i = j = 0;
	while (i < l)
	{
	if (str[i] != '0')
	j = 1;
	if (j || i == l - 1)
	_putchar(str[i]);
	i++;
	}

	_putchar('\n');
	free(str);
}

/**
 * mul - Multiplies a char with a string and places the answer into dest
 * @n: Char to multiply
 * @num: String to multiply
 * @num_index: Last non-NULL index of num
 * @dest: Destination of multiplication
 * @dest_index: Highest index to start addition
 *
 * Return: Pointer to dest, or NULL on failure
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int j, k, mul, mulrem, add, addrem;

	mulrem = addrem = 0;
	for (j = num_index, k = dest_index; j >= 0; j--, k--)
	{
	mul = (n - '0') * (num[j] - '0') + mulrem;
	mulrem = mul / 10;
	add = (dest[k] - '0') + (mul % 10) + addrem;
	addrem = add / 10;
	dest[k] = add % 10 + '0';
	}
	for (addrem += mulrem; k >= 0 && addrem; k--)
	{
	add = (dest[k] - '0') + addrem;
	addrem = add / 10;
	dest[k] = add % 10 + '0';
	}
	if (addrem)
	{
	return (NULL);
	}
	return (dest);
}

/**
 * check_for_digits - Checks the arguments to ensure they are digits
 * @av: Pointer to arguments
 *
 * Return: 0 if digits, 1 if not
 */
int check_for_digits(char **av)
{
	int i, j;

	for (i = 1; i < 3; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
	if (av[i][j] < '0' || av[i][j] > '9')
	return (1);
	}
	}
	return (0);
}

/**
 * init - Initializes a string
 * @str: Sting to initialize
 * @l: Length of string
 *
 * Return: void
 */
void init(char *str, int l)
{
	int i;

	for (i = 0; i < l; i++)
	str[i] = '0';
	str[i] = '\0';
}

/**
 * main - Multiply two numbers
 * @argc: Number of arguments
 * @argv: Argument vector
 *
 * Return: Zero, or exit status of 98 if failure
 */
int main(int argc, char *argv[])
{

	char e[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
	for (ti = 0; e[ti]; ti++)
	_putchar(e[ti])
	;
	}
	return (0);
}
