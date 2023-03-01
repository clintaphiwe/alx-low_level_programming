

#include "main.h"
#include <stdio.h>

/**
 * print_array - Function that print `n` elements of an array of integers
 * @d: int type array pointer
 * @s: int type integer
 * Description: Numbers must be separated by comma and space.
 * Numbers should be displayed in the same order they are stored in array.
 * You can only use _putchar to print.
 */

void print_array(int *d, int s)
{
int a;

a = 0;
for (s--; s >= 0; s--, a++)
{
printf("%d", d[a]);
if (s > 0)
{
printf(", ");
}
}
printf("\n");
}
