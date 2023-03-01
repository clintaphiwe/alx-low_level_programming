#include "main.h"

/**
 * print_numbers - Function that prints  0 - 9
 * Return: void (Success)
 */

void print_numbers(void)
{
	char a = 0;

	while (a <= 9)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
