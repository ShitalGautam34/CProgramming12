#include<stdio.h>

void main(){
	int n,i,f;
	printf("Enter a number.");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--){
		f = f * i;
	}
	printf("The factorial of %d is %d.",n,f);
}
