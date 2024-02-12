#include <stdio.h>

/**
 * _puts_recursion - prints a string, followed a new line, using recursion
 * @s: the string to print
 */
void _puts_recursion(char *s)
{
if (*s)
{
/* print the current character */
putchar(*s);
/* continue with the rest of the string */
_puts_recursion(s + 1);
}
else
{
/* print a new line at the end of the string */
putchar('\n');
}
}
