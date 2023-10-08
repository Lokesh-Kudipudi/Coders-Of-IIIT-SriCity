#include <stdio.h>
#include <math.h>

int pythagoreanTriplet(int a, int b, int c)
{
  if ((pow(a, 2) + pow(b, 2) == pow(c, 2)) || (pow(a, 2) + pow(c, 2) == pow(b, 2)) || (pow(b, 2) + pow(c, 2) == pow(a, 2)))
  {
    printf("There are Pythagorean Triplets \n");
    return 1;
  }
  else
  {
    printf("There are not Pythagorean Triplets \n");
    return 0;
  }
}

int main()
{
  int a, b, c;
  printf("Enter Three numbers! ");
  scanf("%d %d %d", &a, &b, &c);
  pythagoreanTriplet(a, b, c);
  return 0;
}