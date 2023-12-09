// Problem 1

#include <stdio.h>
int main()
{
  char c = 'c';

  putc(c, stdout);
  printf("\n");

  // or putchar(c); equivalent to putc(c, stdout);
  return 0;
}