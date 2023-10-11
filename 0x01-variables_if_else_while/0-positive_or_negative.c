#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- Entry point of the program
 *
 * Description: A program that takes a random number
 * and prints whether positive, negative or zero
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d is ", n);

	if (n > 0)
	{
		printf("positive\n");
	} else if (n == 0)
	{
		printf("zero\n");
	} else
	{
		printf("negative\n");
	}

	return (0);
}
