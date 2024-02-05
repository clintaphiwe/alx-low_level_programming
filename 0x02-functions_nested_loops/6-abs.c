#include <stdio.h>
#include "main.h"

/**
 * _abs - Function that returns the absolute value of a number
 * @n: Input
 * Return: -n (success)
*/

int _abs(int n)
{
if (n <= 0)
return (-n);
}


int main(void)
{
    int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return (0);
}