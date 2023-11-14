// Problem 1

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

  if (r1 != r2 || c1 != c2)
  {
    printf("Matrix addition not possible! \n");
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

  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c1; j++)
    {
      scanf("%d", &m2[i][j]);
    }
  }

  int(*p1)[c1] = m1;
  int(*p2)[c2] = m2;

  printf("Addition of two matrixes is: \n");

  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c1; j++)
    {
      printf("%d ", *(*(p1 + i) + j) + *(*(p2 + i) + j));
    }
    printf("\n");
  }

  return 0;
}