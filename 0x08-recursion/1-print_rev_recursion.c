#include <stdio.h>

/**
 * print_rev_recursion - prints a string in reverse
 * @s: string to be printed in reverse
 */
void print_rev_recursion(char *s)
{
if (*s == '\0')
return;
print_rev_recursion(s + 1);
_putchar(*s);
}
