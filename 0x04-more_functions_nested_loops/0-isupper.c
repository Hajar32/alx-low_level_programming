#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if a given character is in uppercase or not
 * @c: input
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	for (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
	_putchar('n\');
}
