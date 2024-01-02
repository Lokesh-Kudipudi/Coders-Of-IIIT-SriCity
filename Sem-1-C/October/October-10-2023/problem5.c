//Problem 5

#include <stdio.h>

int main()
{
  int n;
  printf("Enter a number! ");
  scanf("%d", &n);

  if (n <= 0)
  {
    printf("Not a palindrome \n");
    return 0;
  }

  int reverse = 0;
  int old = n;

  while (n != 0)
  {
    reverse = (reverse * 10) + (n % 10);
    n = n / 10;
  }

  printf("%d %d \n", old, reverse);

  if (old == reverse)
  {
    printf("Its a palindrome \n");
  }
  else
    printf("Its not a palindrome \n");

  return 0;
}
