#include <stdio.h>

void main(){
	int a;
	
	printf("Enter an Integer: ");
	scanf("%d",&a);
	
	printf("The value in Hexadecimal is: %x \n",a);
	printf("The value in Octal is: %o \n",a);
	printf("The respective char in ASCII is: %c \n",a);
}
