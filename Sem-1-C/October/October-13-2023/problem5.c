// Problem 5

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool checkPalindrome(char str[], int len, int index)
{
  if (len == index)
    return true;
  if ((str[index] == str[len]) && (checkPalindrome(str, len - 1, index + 1)))
  {
    return true;
  }
  else
    return false;
}

int main()
{
  char string[50];

  printf("Enter a string");
  scanf("%s", string);

  if (checkPalindrome(string, strlen(string) - 1, 0))
  {
    printf("Yes! The emtered string is a palindrome! \n");
  }
  else
    printf("No! The entered string is not a palindrome! \n");

  return 0;
}

// Alternate: https://w3resource.com/c-programming-exercises/recursion/c-recursion-exercise-16.php