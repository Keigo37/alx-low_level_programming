#include "main.h"
/**
 * _sqrt_recursion - function that returns the square root of a number
 * @n: number whose square root is returned
 * Return: returns -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	int low, high;

	/* base case */
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	/* create and initiliaze variables low and high */
	low = 1;
	high = n;

	/* a loop that checks low is <= than high */
	while (low <= high)
	{
		/* variable mid is low + high / 2 */
		int mid = (low + high) / 2;
		int mid_squared = mid * mid;

		/* check if mid squared is equal to n */
		if (mid_squared == n)
		{
			return (mid);
		}
		/* update low if mid is < than n. incremental since mid^2 should be 2 */
		else if (mid_squared < n)
		{
			low = mid + 1;
		}
		/* if mid is > than n, update high: decremental */
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
