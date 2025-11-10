#include<stdio.h>
int reverse(int);

void main(){
	int n;
	printf("Enter a number.");
	scanf("%d",&n);
	printf("The reversed number is %d.",reverse(n));
}

int reverse(int n){
	int rem, rev=0;
	while(n!=0){
		rem = n % 10;
		rev = rev * 10 + rem;
		n = n / 10;
	}
	return rev;
}
