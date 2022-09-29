#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints values from an integer to 98
 * @n: integer to be printed to
 */


void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
