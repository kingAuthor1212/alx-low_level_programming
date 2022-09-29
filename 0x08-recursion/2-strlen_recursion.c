#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 * @s: char input 
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
