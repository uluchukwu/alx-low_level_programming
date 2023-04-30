#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change for an amount of money.
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: 0 if no errors, else 1
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0, i;
	int coin_values[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
	printf("Error\n");
	return (1);
	}

	for (i = 0; i < 5; i++)
	{
	coins += cents / coin_values[i];
	cents %= coin_values[i];
	}

	printf("%d\n", coins);
	return (0);
}
