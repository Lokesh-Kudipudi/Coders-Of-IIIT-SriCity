//Problem 3

#include <stdio.h>
#include <stdbool.h>

int main()
{
  int n;
  printf("Enter the number of elements to be input in the array: ");
  scanf("%d", &n);

  int arr[n];
  int temp;

  printf("Enter %d elements for the array \n", n);
  for (int i = 0; i < n; i++)
  {
    printf("Element %d : ", i);
    scanf("%d", &temp);
    arr[i] = temp;
  }

  int max = arr[0];
  for (int i = 0; i < n; i++)
  {
    if (max < arr[i])
    {
      max = arr[i];
    }
  }

  printf("The largest elemnt of the array is: %d \n", max);

  return 0;
}
