#include<stdio.h>
void check(int);

void main(){
	int a;
	printf("Enter a number.");
	scanf("%d",&a);
	check(a);
}

void check(int a){
	if(a % 2 == 0)
		printf("%d is even.",a);
	else
		printf("%d is odd.",a);
}
