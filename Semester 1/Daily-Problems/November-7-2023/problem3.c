#include <stdio.h>
#define n 5
int main()
{
  int arr1[n];
  int arr2[n];
  int temp;

  int *ptr1 = arr1;
  int *ptr2 = arr2;
  printf("Enter elements of %d for the array1: \n", n);

  for (int i = 0; i < n; i++)
  {
    scanf("%d", (ptr1 + i));
  }

  printf("Enter elements of %d for the array2: \n", n);

  for (int i = 0; i < n; i++)
  {
    scanf("%d", (ptr2 + i));
  }

    for (int i = 0; i < n; i++)
  {
    temp = *(ptr1 + i);
    *(ptr1 + i) = *(ptr2 + i);
    *(ptr2 + i) = temp;
  }

  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr1[i]);
  }

  printf("\n");

  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr2[i]);
  }

  printf("\n");
}