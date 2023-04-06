#include "main.h"

/**
 * check - for prime numbers
 * @x: int
 * @y: int
 * Return: int
 */

int check(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (check(x + 1, y));
}

/**
 * is_prime_number - returns 1 if prime num, otherwise return 0
 * @n: num
 * Return: 1 of peime number, otherwise 0
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
