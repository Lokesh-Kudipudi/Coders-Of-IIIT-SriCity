// Bonus

#include <stdio.h>
int main()
{
  int sum = 0;
  int n;

  printf("Enter the suquence of numbers");

  do
  {
    scanf("%d", &n);
    sum = sum + n;

  } while (n != 0);

  printf("The sum of Sequence is: %d \n", sum);

  return 0;
}