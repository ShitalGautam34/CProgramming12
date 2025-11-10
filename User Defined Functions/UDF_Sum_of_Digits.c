#include<stdio.h>
int sum(int);

void main(){
	int n;
	printf("Enter the number.");
	scanf("%d",&n);
	printf("The sum of digits is %d.", sum(n));
}

int sum(int n){
	int rem, sum=0;
	while(n!=0){
		rem = n % 10;
		sum = sum + rem;
		n = n / 10;
	}
	return sum;
}
