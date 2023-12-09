//Problem 4

#include <stdio.h>

int main()
{
  char string[250];
  printf("Input a string: ");
  fgets(string, 250, stdin);
  printf("\nOutput:- \n");

  int i = 0;
  while (string[i] != '\0')
  {
    printf("%c", string[i]);
    if (string[i] == ' ')
    {
      printf("\n");
    }
    i++;
  }
  printf("\n");

  return 0;
}
