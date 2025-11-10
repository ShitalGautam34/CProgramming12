#include<stdio.h>
int check(int, int);

void main(){
	int a,b;
	printf("Enter two numbers.");
	scanf("%d%d",&a,&b);
	printf("The larger number is %d.", check(a,b));
}

int check(int a, int b){
	if(a>b)
		return a;
	else
		return b;
}
