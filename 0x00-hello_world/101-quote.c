#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - Entry point of the program
 * @void - empty parameter
 *
 * Description: This program prints a string using the write()
 * function and prints it to standard output.
 *
 * Return: Always returns 1 to indicate success.
 */
int main(void)
{
	fputs("and that piece of art is useful\" - Dora Korpar, "
			/* Explanation: This string represents a quote */
			"2015-10-19\n", stdout);
	return (1);
}

