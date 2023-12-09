#include<stdio.h>

int main(){
	int n;
	printf("Enter the length of the array: ")
	scanf("%d",&n);
	
	int arr[n];
	
	for(int i = 0, i<n ; i++)
	{
		printf("Enter the %d element of the array: ",i+1);
		scanf("%d",&arr[i]);
	}
		
	int counter;
			
	for(int i = 0, i<n ; i++)
	{
		if(arr[i]%2 == 0) {
		counter++;
		}
	}
	
	printf("The number of even elements are %d",counter);
	
	
	
	return 0;
}
