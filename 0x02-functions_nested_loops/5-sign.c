#include "main.h"

/**
 * print_sign - entry point
 *
 * Description: print alpha value
 *@n: contains value to be compared
 * Return: 0
 */

int print_sign(int n)
{
    if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}