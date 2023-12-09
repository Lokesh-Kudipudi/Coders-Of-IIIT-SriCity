// Example
// Intial String: SriCity
// String to Insert: IIIT
// Position : 4

#include <stdio.h>
#include <string.h>

int main()
{
  char str1[50];
  printf("Enter the Initial String! ");
  fgets(str1, 50, stdin);
  char str2[50];
  printf("Enter the String to Insert! ");
  fgets(str2, 50, stdin);

  int n;
  printf("Enter the position: ");
  scanf("%d", &n);

  int finalLength = (strlen(str1) + strlen(str2)) - 1;

  char str3[finalLength];

  int index = n;

  int i = 0;

  for (; i < n - 1; i++)
  {
    str3[i] = str1[i];
  }
  // Final String: Sri

  i = 0;

  do
  {
    str3[n - 1] = str2[i];
    i++;
    n++;
  } while (i != (int)strlen(str2) - 1);

  // Final String: SriIIIT

  do
  {
    str3[n - 1] = str1[index - 1];
    n++;
    index++;
  } while (index != finalLength);

  // Final String : SriIIITCity

  printf("Final string is! \n");
  fputs(str3, stdout);

  return 0;
}