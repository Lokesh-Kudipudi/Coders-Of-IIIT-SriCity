#include <stdio.h>
#include <string.h>

void toUpper(char str[])
{
  for (int i = 0; i < strlen(str); i++)
  {
    if (str[i] >= 97 && str[i] <= 122)
    {
      str[i] -= 32;
    }
  }

  fputs(str, stdout);
  printf("\n");
}

void toLower(char str[])
{
  for (int i = 0; i < strlen(str); i++)
  {
    if (str[i] >= 65 && str[i] <= 90)
    {
      str[i] += 32;
    }
  }
  fputs(str, stdout);
  printf("\n");
}

int main()
{
  char string[50];
  printf("Enter a string! ");
  fgets(string, 50, stdin);
  string[strlen(string) - 1] = '\0';
  toLower(string);
  toUpper(string);
  return 0;
}