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

  for (int i = 0; i < n; i++)
  {
    printf("%d ", *(ptr + i));
  }

  return 0;
}