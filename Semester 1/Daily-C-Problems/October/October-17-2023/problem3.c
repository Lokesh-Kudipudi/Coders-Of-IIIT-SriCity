#include <stdio.h>
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int m = 10;
  int target = 5;

  printf("The Indexes are: \n");
  for (int i = 0; i < m; i++)
  {
    for (int j = i + 1; j < m; j++)
    {
      if (arr[i] + arr[j] == target)
        printf("%d %d \n", i, j);
    }
  }
  return 0;
}