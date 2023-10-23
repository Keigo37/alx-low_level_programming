#include "main.h"
/**
 * largest_number - prints the largest of 3 integers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number x
 */

int largest_number(int a, int b, int c)
{
	int x;

	if (a >= b && a >= c)
	{
		x = a;
	}
	else if (b >= a && b >= c)
	{
		x = b;
	}
	else
	{
		x = c;
	}

	return (x);
}
