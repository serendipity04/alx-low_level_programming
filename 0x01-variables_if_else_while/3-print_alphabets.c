#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints lower and uppercase letters
 *
 * Return: return 0 if successful
 */

int main(void)
{
	char ch = 'a';
	char U = 'A';
	char n = '\n';

	for (; ch <= 'z'; ch++)
		putchar(ch);
	for (; U <= 'Z'; U++)
		putchar(U);
	putchar(n);

	return (0);
}
