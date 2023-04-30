#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers ordered
 *               from min to max.
 * @min: The first array value
 * @max: The last value
 *
 * Return: Null If min > max or error, else
 *         a pointer to the new array
 */

int *array_range(int min, int max)
{
	int *a;
	int len, i;

	/* Input validation */
	if (min > max)
	return (NULL);

	/* Compute length of array */
	len = max - min + 1;

	/* Allocate memory for the array */
	a = malloc(sizeof(int) * len);

	/* Check if memory allocation was successful */
	if (a == NULL)
	return (NULL);

	/* Fill the array with values */
	for (i = 0; i < len; i++, min++)
	a[i] = min;

	/* Return the array */
	return (a);
}
