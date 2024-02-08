#include <stdio.h>
#include "main.h"

/**
 * times_table - Function prints the time table.
 * Return: Always 0
*/

void times_table(void)
{
int c, r;
for (c = 0; c <= 9; c++)
{
for (r = 0; r <= 9; r++)
{
printf("%3d ", c * r);
if (r != 9)
printf(",");
}
printf("\n");
}
}
