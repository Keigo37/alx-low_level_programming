#include <stdio.h>
#include "main.h"
/**
 * print_alphabet- Entry point of the program
 *
 * Description: This program prints the alphabet in lowercase
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
