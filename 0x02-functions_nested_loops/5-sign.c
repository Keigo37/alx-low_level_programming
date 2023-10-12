#include "main.h"
/**
 * print_sign- function that prints the sign of a number
 * @n: parameter
 *
 * Description: same  as the function
 *
 * Return: 1, 0 and -1
 */
int print_sign(int n)
{
	char c;

	if (n > 0)
	{
		c = '+';
		_putchar(c);
		return (1);
	}
	else if (n < 0)
	{
		c = '-';
		_putchar(c);
		return (1);
	}
	else
	{
		c = '0';
		_putchar(c);
		return (0);
	}
}
