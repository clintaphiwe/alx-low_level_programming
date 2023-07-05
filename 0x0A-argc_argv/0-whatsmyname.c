#include <stdio.h>
#include "main.h"

/**
 * main - The function prints the name of the program
 * @argv: Array of arguments
 * @argv: Number of the arguments
 * Return: Success 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
  printf("%s\n", *argv);

  return (0);
}

