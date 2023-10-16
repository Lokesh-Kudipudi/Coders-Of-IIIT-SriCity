#include <stdio.h>
int main()
{
  int n;
  printf("Enter the number of elements in the array! ");
  scanf("%d", &n);

  int arr[n];
  int freq[n];

  for (int i = 0; i < n; i++)
  {
    printf("Element %d : ", i);
    scanf("%d", &arr[i]);
  }

  int count = 1;

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] == arr[j])
      {
        count++;
        arr[j] = -1;
      }
    }
    freq[i] = count;
    count = 1;
  }

  for (int i = 0; i < n; i++)
  {
    if (arr[i] != -1)
    {
      printf("%d Element occured %d times \n", arr[i], freq[i]);
    }
  }

  return 0;
}