#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints the multiplicaion ot two integers
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 if true, 1 if false
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 1)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("error\n");
	return (0);
}

