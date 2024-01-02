//PRoblem 3

#include <stdio.h>

int main()
{
  int r1, c1;

  printf("Enter the number of rows of Matrix1: ");
  scanf("%d", &r1);
  printf("Enter the number of columns of Matrix1: ");
  scanf("%d", &c1);

  int mat[r1][c1];

  if (r1 != c1)
  {
    printf("Operation not possible! \n");
    return 0;
  }

  printf("Enter the elements of Matrix1: \n");

  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c1; j++)
    {
      scanf("%d", &mat[i][j]);
    }
  }

  int temp = 0;

  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < r1; j++)
    {
      temp = mat[i][r1 - 1 - i];
      mat[i][r1 - i - 1] = mat[i][i];
      mat[i][i] = temp;
    }
  }

  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c1; j++)
    {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }

  return 0;
}
