// Problem 1

#include <stdio.h>

int digits(int num)
{
  if (num == 0)
    return 0;
  return 1 + digits(num / 10);
}
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("The  number of digits are : %d \n", digits(n));
  return 0;
}