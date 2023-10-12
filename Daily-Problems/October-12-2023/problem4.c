// Problem 4

#include <stdio.h>
#include <string.h>

int main()
{
  char string[50] = "abcdefghijklmopqrstuvwxyz";

  int vowels = 0;
  int consonants = 0;
  for (int i = 0; i < strlen(string); i++)
  {
    if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' || string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U')
    {
      vowels++;
    }
    else
      consonants++;
  }
  printf("The number of vowels are %d \n", vowels);
  printf("The number of consonants are %d  \n", consonants);

  return 0;
}