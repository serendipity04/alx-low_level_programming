#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: omits q and e
 *
 * Return: returns 0  if successful
 */


int main(void)
{
	char ch = 'a';
	char n = '\n';

	for (; ch <= 'z'; ch++)
		if (ch == 'e' && ch == 'q')
			putchar(ch);
	putchar(n);

	return (0);
}
