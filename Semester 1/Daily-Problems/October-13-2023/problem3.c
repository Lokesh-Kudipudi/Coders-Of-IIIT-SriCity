// Problem 3

#include <stdio.h>
#include <string.h>

char revString[50];
int i = 0;

void stringReverse(char str[], int index, int len)
{
  if (i != len)
  {
    revString[i] = str[index - 1];
    i++;
    stringReverse(str, index - 1, len);
  }
}

int main()
{
  char string[50];
  printf("Enter a string: ");
  fgets(string, 50, stdin);
  stringReverse(string, strlen(string), strlen(string));
  puts(revString);
  return 0;
}

// Alternate: https://w3resource.com/c-programming-exercises/recursion/c-recursion-exercise-9.php