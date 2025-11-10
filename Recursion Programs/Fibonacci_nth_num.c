// nth term of fibonacci series using recursion
#include<stdio.h>
int fib(int);

void main(){
	int n;
	printf("Enter the number of the term.");
	scanf("%d", &n);
	printf("The %dth term is %d.", n, fib(n));
}

int fib(int n){
	if(n==1) return 0;
	if(n==2) return 1;
	return (fib(n-1) + fib(n-2));
}
