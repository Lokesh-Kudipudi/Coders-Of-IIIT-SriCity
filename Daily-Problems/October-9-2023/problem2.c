// Problem 2

#include <stdio.h>
int main()
{
  int a, b;
  printf("Enter two integers a and b");
  scanf("%d %d", &a, &b);

  for (int i = 1; i <= a; i++) // Outer loop controls the rows
  {
    for (int j = 1; j <= b; j++) // Inner loop controls the column
    {
      printf("*");
    }
    printf("\n"); // Priting a new line after one complete row is printed
  }

  return 0;
}