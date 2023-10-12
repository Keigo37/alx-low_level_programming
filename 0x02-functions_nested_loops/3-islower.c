#include "main.h"
/**
 * _islower- Entry point
 * @c: parameter
 *
 * Description: program that checks for lowercase char
 *
 * Return: will return 1 if lower
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
