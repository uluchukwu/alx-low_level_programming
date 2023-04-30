#include <stdio.h>

/**
 * main - Prints the number of arguments passed to it, excluding program name
 * @argc: Number of arguments passed to program
 * @argv: Array of pointers to strings containing arguments
 *
 * Return: 0 upon successful completion
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
