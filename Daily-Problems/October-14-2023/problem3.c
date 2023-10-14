// Problem 3

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
  int count[26];
  char string[50];
  fgets(string, 50, stdin);

  int i = 0;
  for (; i < strlen(string); i++)
  {
    if (string[i] == ' ')
      continue;
    string[i] = tolower(string[i]);
  }

  i = 0;

  while (string[i] != 10)
  {
    count[string[i] - 'a'] = 1;
    i++;
  }

  i = 0;

  for (; i <= 25; i++)
  {
    if (count[i] != 1)
    {
      printf("Its not a pangram string! \n");
      break;
    }
  }

  if (i == 26)
    printf("Its a pangram string!");

  return 0;
}