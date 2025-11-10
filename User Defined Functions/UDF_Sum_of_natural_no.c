#include<stdio.h>
void sum(int);

void main(){
	int n;
	printf("Enter the number of natural numbers.");
	scanf("%d",&n);
	sum(n);
}

void sum(int n){
	int i, sum=0;
	for(i=1;i<=n;i++)
		sum = sum + i;
		
	printf("The sum of %d natural numbers is %d.",n,sum);
}
