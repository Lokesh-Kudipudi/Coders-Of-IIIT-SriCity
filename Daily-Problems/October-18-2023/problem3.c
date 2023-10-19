#include <stdio.h>
#include <string.h>

int main()
{
  char str[100];
  fgets(str, 100, stdin);
  str[strlen(str) - 1] = '\0';

  for (int i = 0; i < strlen(str); i++)
  {
    if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
    {
      printf("%c is Letter\n", str[i]);
    }
    else if (str[i] >= 48 && str[i] <= 57)
    {
      printf("%c is digit\n", str[i]);
    }
    else
    {
      printf("%c is Special character\n", str[i]);
    }
  }

  return 0;
}