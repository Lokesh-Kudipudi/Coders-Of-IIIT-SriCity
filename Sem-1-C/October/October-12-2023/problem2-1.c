// Problem 2 model 1
//  Input : AABBCCDDE
//  Output : ABCDE

#include <stdio.h>

int main()
{
  char string[50] = "AABBCCDD";

  int i = 0;

  while (string[i] != '\0')
  {
    if (string[i] != string[i + 1])
    {
      printf("%c", string[i]);
    }
    i++;
  }
  printf("\n");

  return 0;
}