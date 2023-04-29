#include "main.h"

/**
 *_atoi - Fucntion that takes string as input and, return it as integer
 *
 *@s: String
 *Retrun: sign * num
 */

int _atoi(char *s)
{
	int num = 0;
	int sign = 1;
	int i = 0;

	while (*(s + i) == ' ' || *(s + i) == '\t' || *(s + i) == '\n')
	{
	i++;
	}
	if (*(s + i) == '-')
	{
	sign = -1;
	i++;
	}
	else if (*(s + i) == '+')
	{
	i++;
	}
	while (*(s + i) >= '0' && *(s + i) <= '9')
	{
	num = num * 10 + (*(s + i) - '0');
	i++;
	}
	return (sign * num);
}
