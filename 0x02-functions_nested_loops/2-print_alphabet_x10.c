#include "main.h"
/**
 * print_alphabet_x10- Entry point of the program
 *
 * Description: A program prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 *
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 1;

	while (i <= 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
