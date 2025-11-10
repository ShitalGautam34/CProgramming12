#include<stdio.h>
void fib(int);

void main(){
	int n;
	printf("Enter the number of terms.");
	scanf("%d",&n);
	fib(n);
}

void fib(int n){	
	int i, first=0, second=1, next;
	for(i=1;i<=n;i++){
		printf("%d\t",first);
		next = first + second;
		first = second;
		second = next;
	}
}
