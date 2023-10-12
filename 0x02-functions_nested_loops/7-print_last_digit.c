#include "main.h"
#include <limits.h>
/**
 * print_last_digit- function that prints last digit
 * @n: integer checked
 *
 * Description: prints last digit of a number x
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int l;

	if (n == INT_MIN)
	{
		l = 8;
	}
	else if (n < 0)
	{
		n = -n;
		l = n % 10;
	}
	else
	{
		l = n % 10;
	}

	_putchar('0' + l);
	return (l);
}
