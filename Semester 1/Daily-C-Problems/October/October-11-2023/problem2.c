// Problem 2

#include <stdio.h>

int main() {
	int a = 10, b = 20;
	printf("Before Swapping \n");
	printf("a is %d and b is %d \n",a,b);
	b = a + b;
	a = b - a;
	b = b - a;
	printf("After Swapping \n");
	printf("a is %d and b is %d \n",a,b);
	return 0;
}
