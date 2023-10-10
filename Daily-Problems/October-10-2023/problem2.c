//Problem 2


#include <stdio.h>
#include <math.h>

int main()
{
  int digits = 0;
  int remainder = 0;
  int num = 0;
  int result = 0;
  int temp = 0;

  printf("Armstrong numbers between 1 and 500 are: ");

  for (int i = 1; i <= 500; i++)
  {
    temp = i;
    num = i;

    while (temp != 0)
    {
      temp /= 10;
      digits++;
    }

    while (num != 0)
    {
      remainder = num % 10;
      result += pow(remainder, digits);
      num /= 10;
    }

    if (result == i)
    {
      printf("%d \n", i);
    }

    digits = 0;
    result = 0;
  }

  return 0;
}
