#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description:  A program that prints all possible combinations of
 * two digits.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x < 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (y > x)
			{
				putchar('0' + x);
				putchar('0' + y);
				if (x != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
