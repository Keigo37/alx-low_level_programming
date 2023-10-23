#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: list all the natural numbers below 10
 * that are multiples of 3 or 5, we get 3, 5, 6 and 9.
 * the sum of these multiples is 23.
 * a  program that computes and prints
 * the sum of all the multiples of 3 or 5 below 1024 (excluded)
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}
