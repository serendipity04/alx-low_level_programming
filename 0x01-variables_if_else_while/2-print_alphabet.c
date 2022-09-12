#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program prints the alphabets
 *
 * Return: returns 0 if successful
 */

int main(void)
{
	char ch = 'a';

	for (; ch <= 'z'; ch++)
		putchar(ch);

	return (0);
}
