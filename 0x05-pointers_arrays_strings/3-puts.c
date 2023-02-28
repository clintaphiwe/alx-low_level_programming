#include "main.h"

/**
 * _puts - Function that prints a string and a new line
 * @str: Is a pointer to a string that is supposed to print
 *
 * Return: 0
 */

void _puts(char *str)
{
int i = 0;

while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
