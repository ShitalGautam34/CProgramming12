#include<stdio.h>
void fac(int);

void main(){
	int n;
	printf("Enter a number.");
	scanf("%d",&n);
	fac(n);
}

void fac(int n){
	int i, f = 1;
	for(i=n;i>=1;i--){
		f = f * i;
	}
	printf("The factorial of %d is %d.",n,f);
}
