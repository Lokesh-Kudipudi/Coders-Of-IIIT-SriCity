#include <stdio.h>
#define n 5
int main()
{
  int arr[n] = {1, 2, 3, 4, 5};

  int arrcpy[n];
  int *ptr = arr;

  for (int i = 0; i < n; i++)
  {
    arrcpy[i] = *(ptr + i);
  }

  for (int i = 0; i < n; i++)
  {
    printf("%d ", arrcpy[i]);
  }

  return 0;
}