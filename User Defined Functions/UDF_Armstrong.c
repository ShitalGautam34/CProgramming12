#include<stdio.h>
void check(int);

void main(){
	int n, rem, temp=0, original;
	printf("Enter a number.");
	scanf("%d",&n);
	check(n);
}

void check(int n){
	int rem, temp=0, original;
	original = n;
	
	while(n!=0){
		rem = n % 10;
		temp = temp + rem * rem * rem;
		n = n / 10;
	}
	
	if(original == temp)
		printf("%d is armstrong.",original);
	else
		printf("%d is not armstrong.",original);
}
