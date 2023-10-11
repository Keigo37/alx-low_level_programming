#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/**
 * main- Entry point of the program
 *
 * Description: This program takes a random and checks whether
 * the last digit of the number is
 * greater than 5, is 0 or is less than 6 and not 0
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d and is ", n, n % 10);
		if ((n % 10) > 5)
		{
			printf("greater than 5\n");
		} else if ((n % 10) == 0)
		{
			printf("0\n");
		} else if ((n % 10) < 6 && (n % 10) != 0)
		{
			printf("less than 6 and not 0\n");
		}

	return (0);
}
