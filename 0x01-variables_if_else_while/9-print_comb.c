#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: comb int
 *
 * Return: return 0
 */

int main(void)
{
	char n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
