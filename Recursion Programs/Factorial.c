// factorial of number with recursion
#include<stdio.h>
int fact(int);

void main(){
	int n;
	printf("Enter the number. ");
	scanf("%d", &n);
	printf("The factorial of %d is %d.",n,fact(n));
}

int fact(int n){
	if(n==0 || n==1) return 1;
	return (n*fact(n-1));
}
