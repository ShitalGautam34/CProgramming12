#include<stdio.h>

void main(){
	int n, rem, sum;
	printf("Enter the number.");
	scanf("%d",&n);
	
	while(n!=0){
		rem = n % 10;
		sum = sum + rem;
		n = n / 10;
	}
	printf("The sum of digits is %d.",sum);
}
