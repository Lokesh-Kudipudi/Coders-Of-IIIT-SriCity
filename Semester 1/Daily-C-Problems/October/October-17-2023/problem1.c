#include <stdio.h>
int main()
{
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  int m = 10;

  int s;
  printf("Enter the number of positions to shift: ");
  scanf("%d", &s);

  int temp1 = arr[0];
  int temp2 = arr[1];

  for (int j = 1; j <= s; j++)
  {
    arr[0] = arr[m - 1];
    for (int i = 1; i < m; i++)
    {
      arr[i] = temp1;
      temp1 = temp2;
      temp2 = arr[i + 1];
    }
    temp1 = arr[0];
    temp2 = arr[1];
  }

  printf("New array is: \n");
  for (int i = 0; i < m; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}