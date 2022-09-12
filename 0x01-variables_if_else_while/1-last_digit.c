#include <stdlib.h>

#include <time.h>

#include <stdio.h>

#include <math.h>

/**
 * main - Entry point
 *
 * Description: prints out the last digit of a random number
 *
 * Return: Always return 0 if successful
 */

int main(void)
{
	int n, a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	a = n % 10;

	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, a);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, a);
	else if (n < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);

	return (0);
}
