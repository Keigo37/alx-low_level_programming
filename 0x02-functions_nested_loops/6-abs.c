#include "main.h"
/**
 * _abs(int)- function start
 * @x: the integer whose value is computed
 *
 * Descrtiption: computes the absolute value of an integer
 *
 * Return: 0
 */
int _abs(int x)
{
	int r;

	if (x < 0)
	{
		r = (x * -1);
	}
	else
	{
		r = x;
	}
	return (r);
}
