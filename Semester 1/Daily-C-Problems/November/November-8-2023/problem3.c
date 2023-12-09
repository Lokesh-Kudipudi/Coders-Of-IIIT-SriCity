#include <stdio.h>
#define r 3
#define c 3
int main()
{
  int arr[r][c];
  printf("Enter Array of %d rows and %d colums: \n", r, c);
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }

  int(*ptr)[c] = arr;

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      printf("%d ", *(*(ptr + i) + j));
    }
  }
  return 0;
}