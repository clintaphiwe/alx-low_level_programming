
#include "main.h"

/**
 * _strncat - Function that concatenates two strings
 * @dest: The string that will be appended
 * @src: The string that will be appended to dest
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: Returns a pointer to the resulting string dest (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
