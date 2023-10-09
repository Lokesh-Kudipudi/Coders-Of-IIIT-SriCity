// Problem 3

#include <stdio.h>
int main()
{
  int n;
  printf("Enter the value of n: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (i % 2 == 0)
      {
        if (j % 2 == 0)
          printf("1");
        else
          printf("0");
      }
      else
      {
        if (j % 2 == 0)
          printf("0");
        else
          printf("1");
      }
    }
    printf("\n");
  }

  return 0;
}

// Basically If
// row(i) is even we are printing 0 in odd places and 1 in even places
// row(i) is odd we are printing 0 in even places and 1 in odd places