#include "main.h"

/**
 * _strpbrk - Entry Point
 * @s: Input
 * @accept: Input
 * Return: 0 (SUCCESS)
*/

char *_strpbrk(char *s, char *accept)
{
int k;

while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
return (s);
}
s++;
}
return ('\0');
}
