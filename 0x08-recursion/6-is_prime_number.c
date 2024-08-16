o6@d8#q6Xh2CT5WFY&#5Gd$zw66oL2$#include "main.h"
#include <stdio.h>
/**
 * is_prime_number- function checks if number is aprime number
 * @n: is this number a prime number
 * Return: returns 1 if n is a prime number, 0 if not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	if (n % (sqrt(n) - 1)))
	{
		return (0);
	}
return (1);	
}	
