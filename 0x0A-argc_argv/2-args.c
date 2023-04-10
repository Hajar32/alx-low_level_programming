#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: num of arg
 * @argv: command line arg
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		print("Error\n");
		return (1);
	}
	else
		print("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
