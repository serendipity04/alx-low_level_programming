#include "main.h"

/**
 *
 * print_alphabet_x10 - entry point
 *
 * Description: prints out 10x the alphabets
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
    int count = 0;
    char c;

    while (count++ <=9){
        for (c = 'a'; c <= 'z'; c++)
        _putchar(c);
        _putchar('\n');
    }
}