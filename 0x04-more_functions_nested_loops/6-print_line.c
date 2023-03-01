#include "main.h"

/**
 * print_line -Function that prints a line
 * @n: variable
 * Return: 0 (SUccess)
 */

void print_line(int n)
{
	int a = 0;

	while (a < n && n > 0)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
