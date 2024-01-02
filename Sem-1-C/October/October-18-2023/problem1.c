#include <stdio.h>
#include <string.h>

int main()
{
  char string[50];
  printf("Enter a string! ");
  fgets(string, 50, stdin);

  int sum = 0;

  int i = 0;

  while (i < strlen(string) - 1)
  {
    sum = sum + (int)string[i];
    i++;
  }

  printf("Sum is %d \n", sum);

  return 0;
}