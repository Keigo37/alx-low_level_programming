#include "main.h"
/**
 * _isalpha- function checks for alphabetic char
 * @c: parameter
 *
 * Description: Checks for alphabetic char
 *
 * Return: returns 1 if upp/lower, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
