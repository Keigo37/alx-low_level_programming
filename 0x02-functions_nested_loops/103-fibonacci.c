#include <stdio.h>
/**
 * main- Entry point of the program
 *
 * Description: considering the terms in the Fibonacci sequence
 * whose values do not exceed 4,000,000.
 * a program that finds and prints the sum of the even-valued term
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long int j, k, l, sum;

	j = 1;
	k = 2;
	sum = 0;
	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		l = j + k;
		j = k;
		k = l;
	}

	printf("%lu\n", sum);

	return (0);
}
