#include <stdio.h>
#define n 5

int main()
{
  int arr[n];

  int *ptr = arr;

  printf("Enter elements of %d for the array: \n", n);

  for (int i = 0; i < n; i++)
  {
    scanf("%d", (ptr + i));
  }

  int temp;

  for (int i = 0; i < n / 2; i++)
  {
    temp = *(arr + i);
    *(arr + i) = *(arr + n - i - 1);
    *(arr + n - i - 1) = temp;
  }

  printf("Array in Reverse is : \n");

  for (int i = 0; i < n; i++)
  {
    printf("%d ", *(ptr + i));
  }

  printf("\n");

  return 0;
}