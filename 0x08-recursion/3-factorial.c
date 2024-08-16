#include "main.h"
/**
 * factorial- function that returns the factorial of a number
 * @n: number whose factorial is returned
 * Return: 0 if n is lower than 0, -1 if error occurs
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

