#include "main.h"

/**
 * string_toupper - Function that will be changing all lowercase letters
 *                  of a string to uppercase
 * @str: The string to be changed
 * Return: A pointer to the changed string (Successe)
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
