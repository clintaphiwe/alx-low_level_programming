#include <stdio.h>
#include "main.h"

void print_to_98(int n){
  if (n != 98){
    while (n <= 98){
      printf("%d ", n++);
      if (n <= 97)
        printf(", ");
    }

    while (n >= 98){
      printf("%d", n--);
      if (n > 97)
        printf(", ");
    }

    printf("\n");
  } else
  printf("%d ", n);
}
  

int main(void)
{
    print_to_98(0);
    putchar('\n');
    print_to_98(98);
    putchar('\n');
    print_to_98(111);
    putchar('\n');
    print_to_98(81);
    putchar('\n');
    print_to_98(-10);
    putchar('\n');
    return (0);
}