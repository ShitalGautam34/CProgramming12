#include<stdio.h>
void sum(int, int);

void main(){
	int a,b;
	printf("Enter two numbers.");
	scanf("%d%d", &a,&b);
	sum(a,b);
}

void sum(a,b){
	int s;
	s = a + b;
	printf("The sum of %d and %d is %d.",a,b,s);
}
