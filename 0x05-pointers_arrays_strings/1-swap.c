#include "main.h"

/**
 * swap_int - Function that swaps values of two integars
 * @a: First pointer
 * @b: Second pointer
 * return: 0 (SUCCESS)
 */

void swap_int(int *a, int *b)
{
*a += *b;
*b = *a - *b;
*a = *a - *b;
}
