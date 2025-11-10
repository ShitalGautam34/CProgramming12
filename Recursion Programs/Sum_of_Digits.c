// sum of digits of number with recursion
#include<stdio.h>
int sum(int);

void main(){
	int n;
	printf("Enter the number. ");
	scanf("%d", &n);
	printf("The sum of digits of %d is %d.",n,sum(n));
}

int sum(int n){
	if(n==0) return 0;
	int lastDigit;
	lastDigit = n % 10;
	return (lastDigit + sum(n/10));
}
