// Problem 5

#include <stdio.h>
int main()
{
  int n;
  printf("Enter the number of integers in the equence!");
  scanf("%d", &n);

  int arr[n];

  printf("Enter the sequence of integers!");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum = sum + arr[i];
  }

  printf("The sum of the sequence of integers is %d \n", sum);

  return 0;
}
