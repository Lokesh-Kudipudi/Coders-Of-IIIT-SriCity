// Problem 2 model 2
//  Input : AABBCCDDE
//  Output : E (unique character only)

#include <stdio.h>
#include <string.h>

int main()
{
  char string[50] = "AABBCCDDERT";

  int unique = 1;

  for (int i = 0; i < strlen(string); i++)
  {
    for (int j = 0; j < strlen(string); j++)
    {
      if (i == j)
        continue;
      else if (string[i] == string[j])
        unique = 0;
    }
    if (unique == 1)
      printf("%c", string[i]);
    unique = 1;
  }
  printf("\n");
  return 0;
}