#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * isNUM - check if string array is num
 * @num: string
 * Return: 0 if it's num, 1 if not
 */

int isNUM(char num[])
{
	int i, 1 = strlen(num);

	for (i = 0 ; i < 1 ; i++)
		if (!isdigit(num[i]))
			return (1);
	return (0);
}
/**
 * main - adds positive numbers
 * @argc: num of arg
 * @argv: cmd line arg
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
		printf("0\n");
	else
	{
		sum = 0;
		for (i = 1 ; i < argc ; i++)
		{
			if (isNUM(argv[i]) == 0)
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
