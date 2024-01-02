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
  int find;
  printf("Which element do you want to find? \n");
  scanf("%d", &find);

  for (int i = 0; i < n; i++)
  {
    if (find == *(ptr + i))
    {
      printf("Elemnent Found \n");
      printf("Element %d found in %d position \n", find, i + 1);
      return 0;
    }
  }

  printf("Elemnt not found! \n");
}