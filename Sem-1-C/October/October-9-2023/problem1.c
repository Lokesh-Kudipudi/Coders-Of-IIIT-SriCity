// Problem 1

#include <stdio.h>
int main()
{
  int p;
  printf("Enter an Integer!");
  scanf("%d", &p);

  int factor = 0;

  for (int i = 1; i <= p; i++) // Loop from 1 to p
  {
    if (p % i == 0) // Checking the number of factors from 1 to That accepted integer
    {
      factor++;
    }
  }

  if (factor == 2) // Prime numbers have two factors only
    printf("Its a prime Number!");
  else
    printf("Its not a Prime Number!");

  return 0;
}