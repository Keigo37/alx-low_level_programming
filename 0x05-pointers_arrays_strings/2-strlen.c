#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: char to check
 * Description: returns the length of a string
 *
 * Return: 0 (success)
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
