#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Prints the addition of positive numbers.
 * @argc: Argument count/number.
 * @argv: Argument vector, array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols
 * that are non-digits, return 1.
 *         Otherwise, return 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
	for (j = 0; argv[i][j] != '\0'; j++)
	{
	if (!isdigit(argv[i][j]))
	{
	printf("Error\n");
	return (1);
	}
	}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
