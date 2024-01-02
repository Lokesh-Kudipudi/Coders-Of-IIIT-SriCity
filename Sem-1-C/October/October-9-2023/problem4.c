// Problem 4

#include <stdio.h>
int main()
{
  char string[100];
  printf("Enter a String without spaces!: ");
  scanf("%s", string);

  int counter = 0;

  while (string[counter] != '\0')
  {
    counter++; // Counting the number of characters till we reach null character
  }

  printf("The Length of the string is %d \n", counter);
  return 0;
}