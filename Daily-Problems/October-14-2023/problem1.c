// Problem 1

#include <stdio.h>
int main()
{
  int arr[10] = {1, 5, 12, 15, 4, 8, 9, 10, 11, 3};
  printf("Elements of the Array before Sorting: ");
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", arr[i]);
  }

  int temp = 0;

  for (int i = 0; i < 10; i++)
  {
    for (int j = i + 1; j < 10; j++)
    {
      if (arr[i] > arr[j])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  printf("\n Elements of the Array after Sorting: ");
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}