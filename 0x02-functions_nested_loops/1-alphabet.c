#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Description: prints the alphabet
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	char c;
	char n = '\n';

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar(n);
}
