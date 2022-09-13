#include <stdio.h>

/**
 * main - reversed numbers
 *
 * Description: main function
 *
 * Return: return 0 if complete
 */

int main(void)
{
	char ch = 'z';
	char n = '\n';

	for (; ch >= 'a'; ch--)
		putchar(ch);
	putchar(n);

	return (0);
}
