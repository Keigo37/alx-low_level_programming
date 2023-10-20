#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Program that print all single digit numbers of base 10 incl 0
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar('0' + digit);
	}
	putchar('\n');
	return (0);
}
