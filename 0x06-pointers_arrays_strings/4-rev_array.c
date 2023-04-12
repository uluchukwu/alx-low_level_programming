#include "main.h"
/**
 *reverse_array - a function that reverses the
 *content of an array of integers.
 *@a: a pointer element
 *@n: is the number of elements of the array
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
	int temp = a[i];

	a[i] = a[j];
	a[j] = temp;
	i++;
	j--;
	}
}
