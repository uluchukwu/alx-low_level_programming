#include "main.h"
/**
 *factorial - function that prints the factorial of a given number
 *@n: number to be printed
 *Return:0 on success and 1 on failure
 */

int factorial(int n)
{
	if (n < 0) /* Error case: n is lower than 0 */
	return (-1);
	else if (n == 0) /* Base case: factorial of 0 is 1 */
	return (1);
	else
	return (n * factorial(n - 1)); /* Recursive call */
}
