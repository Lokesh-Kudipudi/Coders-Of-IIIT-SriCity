//Problem 2

#include <stdio.h>

int main()
{
  int r1, c1, r2, c2;

  printf("Enter the number of rows of Matrix1: ");
  scanf("%d", &r1);
  printf("Enter the number of columns of Matrix1: ");
  scanf("%d", &c1);
  printf("Enter the number of rows of Matrix2: ");
  scanf("%d", &r2);
  printf("Enter the number of columns of Matrix1: ");
  scanf("%d", &c2);

  int m1[r1][c1];
  int m2[r2][c2];

  if (c1 != r2)
  {
    printf("Matrix multiplication not possible! \n");
    return 0;
  }

  printf("Enter the elements of Matrix1: \n");

  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c1; j++)
    {
      scanf("%d", &m1[i][j]);
    }
  }

  printf("Enter the elements of Matrix2: \n");

  for (int i = 0; i < r2; i++)
  {
    for (int j = 0; j < c2; j++)
    {
      scanf("%d", &m2[i][j]);
    }
  }

  int m3[r1][c2];
  int temp = 0;

  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c2; j++)
    {
      for (int k = 0; k < c1; k++)
      {
        temp = temp + (m1[i][k] * m2[k][j]);
      }
      m3[i][j] = temp;
      temp = 0;
    }
  }

  printf("Multiplication of the two Matrix is: \n");

  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c2; j++)
    {
      printf("%d ", m3[i][j]);
    }
    printf("\n");
  }

  return 0;
}
