// sum of natural numbers using recursion
#include<stdio.h>
int sum(int);

void main(){
	int n;
	printf("Enter the number.");
	scanf("%d", &n);
	printf("THe sum of natural numbers upto %d is %d.",n,sum(n));
}

int sum(int n){
	if(n==1) return 1;
	return (n + sum(n-1));
}
