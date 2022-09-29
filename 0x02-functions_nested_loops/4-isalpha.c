#include "main.h"

/**
 * _isalpha - entry point
 *
 * Description: print alpha value
 *@c: contains value to be compared
 * Return: 0
 */

int _isalpha(int c)
{
	if (c > 'A' && c < 'Z')
	{
		return (1);
	}
	else if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

