#include <stdio.h>
#include <stdlib.h>
int main()
{
  int arr[] = {1, 2, 3, 4, -5, 0, 0, 8, 9, 10};
  int sum = abs(arr[1] + arr[0]);
  int m = 10;

  for (int i = 0; i < m; i++)
  {
    for (int j = i + 1; j < m; j++)
    {
      if (abs(arr[i] + arr[j]) < abs(sum))
      {
        sum = arr[i] + arr[j];
      }
    }
  }

  printf("The sum of elements closest to zero is %d \n", sum);
  return 0;
}