#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: program that prints all possible combinations
 * of single-digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
		if (i >= 9)
		{
			putchar('\n');
		}
		else
		{
			putchar(',');
			putchar(' ');
	}
}
	return (0);
}
