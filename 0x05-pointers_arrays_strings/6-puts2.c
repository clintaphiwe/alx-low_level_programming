#include "main.h"

/**
 * puts2 -Function that prints every other character of a string
 * @str: The pointer is used for string reference
 * Return: 0
 */

void puts2(char *str)
{
int a = 0;

while (str[a] != '\0')
{
if (a % 2 == 0)
{
_putchar(str[a]);
}
a++;
}
_putchar('\n');
}
