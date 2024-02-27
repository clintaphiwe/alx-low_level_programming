#include <stdio.h>

/**
 * _puts_recursion - prints a string, followed a new line, using recursion
 * @s: the string to print
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
/* print the current character */
putchar(*s);
/* continue with the rest of the string */
_print_rev_recursion(s + 1);
}
else
{
/* print a new line at the end of the string */
putchar('\n');
}
}


int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}


int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return (0);
}