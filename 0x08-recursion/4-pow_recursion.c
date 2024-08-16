#include "main.h"
/**
 * _pow_recursion- a function that return the value of x^y
 * @x: the base number
 * @y: the exponent
 * Return: returns -1 when y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
    else if (y == 0)
    {
        return (1);
    }
	else if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
