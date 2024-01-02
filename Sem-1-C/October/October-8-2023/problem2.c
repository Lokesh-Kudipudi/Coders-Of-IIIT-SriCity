#include <stdio.h>
int main()
{
  int year;
  printf("Enter the Year: ");
  scanf("%d", &year);
  if (year <= 0)
    printf("Invalid Year! Try Again!");
  else
  {
    if (year % 4 == 0)
      printf("Its a Leap Year!");
    else
      printf("Its not a leap year!");
  }
  return 0;
}