// Problem 5

#include <stdio.h>
#include <math.h>

int main()
{
  int n;
  printf("Which operation would you like to do? \n");
  printf("1 -- Convert given Binary number to Decimal \n");
  printf("2 -- Convert given Decimal number to Binary \n");
  printf("Enter your choice: ");
  scanf("%d", &n);

  int x = 0;
  int bin;
  int dec;

  switch (n)
  {
  case 1:
    printf("Enter the Binary Number: ");
    scanf("%d", &bin);
    while (bin != 0)
    {
      dec = dec + (bin % 10) * pow(2, x);
      x++;
      bin = bin / 10;
    }
    printf("The Decimal Value is: %d \n", dec);
    break;
  case 2:
    printf("Enter a decimal number: ");
    scanf("%d", &dec);
    while (dec != 0)
    {
      bin = bin + (dec % 2) * pow(10, x);
      dec = dec / 2;
      x++;
    }
    printf("Given decimal number in binary is %d\n", bin);
    break;
  default:
    printf("Enter a valid number! \n");
  }
  return 0;
}