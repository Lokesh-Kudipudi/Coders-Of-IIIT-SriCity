#include <stdio.h>
int main()
{
  int *max;
  int m, n;
  printf("Enter two numbers: \n");
  scanf("%d %d", &m, &n);

  max = m > n ? &m : &n;

  printf("Maximun of two numbers is: %d \n", *max);
  return 0;
}