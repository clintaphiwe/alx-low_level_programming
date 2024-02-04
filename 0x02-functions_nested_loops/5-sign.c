#include <stdio.h>
#include "main.h"

/**
 * print_sign - Function that prints signs of numbers
 * @n: intput
 * Return: 1 (success)
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
