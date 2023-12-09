#include <stdio.h>

int length(char *p)
{
  int i = 0;
  while (*(p + i) != '\0')
  {
    i++;
  }
  return i;
}
int main()
{
  char str[50];
  printf("Enter a String! ");
  scanf("%[^\n]s", str);

  printf("Length of the string is: %d\n", length(str));

  return 0;
}