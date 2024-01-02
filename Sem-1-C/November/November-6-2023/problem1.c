#include <stdio.h>
int main()
{
  int m, n;
  printf("Enter two numbers: \n");
  scanf("%d %d", &m, &n);

  int *ptr1 = &m;
  int *ptr2 = &n;

  printf("Sum of the two pointers is %d \n", *ptr1 + *ptr2);
  printf("Sum of the difference pointers is %d \n", *ptr1 - *ptr2);
  printf("Sum of the Multiplication pointers is %d \n", *ptr1 * *ptr2);
  printf("Sum of the Division pointers is %d \n", *ptr1 / *ptr2);
  printf("Sum of the Modulus pointers is %d \n", *ptr1 % *ptr2);

  return 0;
}