#include "main.h"
/**
 * _pow_recursion - function that returns  x raised to the power of y
 *@x: number to be expanded
 *@y:expansion power
 *Return:0 on success, 1 on failure
 */

int _pow_recursion(int x, int y)
{
	if (y < 0) /* Error case: y is lower than 0 */
	return (-1);
	else if (y == 0) /* Base case: any number raised to the power of 0 is 1 */
	return (1);
	else
	return (x * _pow_recursion(x, y - 1)); /* Recursive call */
}
