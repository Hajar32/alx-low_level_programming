#include "main.h"

/**
 * check - for square root
 * @x: integer
 * @y: integer
 * Return: integer
 */

int check(int x, int y)
{
	if (x * x == y)
		return (x);
	else if (x * x > y)
		return (-1);
	return (check(x + 1, y));
}
/**
 * _sqrt_recursion - return the natural qsuare root of a number
 * @n: number
 * Return: natural square of num
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}

