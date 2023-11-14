#include <stdio.h>
int main()
{
  char a = 'A';
  char *ptr = &a;

  for (int i = 1; i <= 26; i++)
  {
    printf("%c ", *ptr);
    *ptr = *ptr + 1;
    // *ptr++;
  }
  printf("\n");
  return 0;
}