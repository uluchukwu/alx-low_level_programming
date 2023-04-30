#include <stdio.h>

/**
 * main - Prints all arguments
 * @argc: Number of arguments passed to program
 * @argv: Array of pointers to strings containing arguments
 *
 * Return: 0 upon successful completion
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}

	return (0);
}
