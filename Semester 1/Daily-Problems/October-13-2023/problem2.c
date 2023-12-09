// Problem 2
#include <stdio.h>

int sumOfDigits(int num)
{
  if (num == 0)
    return 0;
  return (num % 10) + sumOfDigits(num / 10);
}
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("The sum of digits are : %d \n", sumOfDigits(n));
  return 0;
}