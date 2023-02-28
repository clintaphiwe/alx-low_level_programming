#include "main.h"

/**
 * print_rev - Function that  prints a string in reverse
 * @s: Pointer that is used string reference pointer
 * Return: 0 (Success)
 */

void print_rev(char *s)
{
int i = 0;

while (s[i])
i++;
while (i--)
_putchar(s[i]);
_putchar('\n');
}
