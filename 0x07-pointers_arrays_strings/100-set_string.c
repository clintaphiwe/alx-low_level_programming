#include <stdio.h>
#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: the pointer to be modified
 * @to: The string that will replace the content pointed by s
 * Return: Success
*/

void set_string(char **s, char *to)
{
*s = to;
}
