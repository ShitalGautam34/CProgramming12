#include<stdio.h>
void check(int);

void main(){
	int n;
	printf("Enter a number.");
	scanf("%d",&n);
	check(n);
}

void check(int n){
	int i, isPrime=1;
	if(n<=1){
		isPrime = 0;
	}
	else{
		for(i=2;i<=n/2;++i){
			if(n % i == 0){
				isPrime = 0;
				break;
			}
		}
	}
	
	if(isPrime == 1)
		printf("%d is prime.",n);
	else
		printf("%d is composite.",n);
}
