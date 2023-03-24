#include "main.h"

/**
 * print_square - Print a square
 * @size: size of the square
 */

void print_square(int size)
{
	if (siz <= 0)
		_putchar('n\');
	else
	{
		int i, j;

		for (i = 0 ; i <= size ; i++)
		{
			for (j = 1 ; j <= size ; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
