// Problem 4

#include <stdio.h>

int exponent(int b, int p)
{
  if (p == 0)
    return 1;
  return b * exponent(b, p - 1);
}

int main()
{
  int base;
  int power;
  printf("Input the base value :");
  scanf("%d", &base);
  printf("Input the power value :");
  scanf("%d", &power);

  printf("The value of %d power %d is %d \n", base, power, exponent(base, power));
  return 0;
}